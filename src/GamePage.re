/* [@bs.val] external requireCSS: string => unit = "require";
requireCSS("../src/Card.css"); */

type state = {
  currentIdx: int,
  flipped: bool,
  deck: array(DataFetcher.word),
  isGameOn: bool
}

type action = 
  | Next
  | Flip
  | Unflip
  | Hint
  | Restart;

let component = ReasonReact.reducerComponent("GamePage");

let make = (_children) => {

  let getShuffledDeck = () => {
    DataFetcher.getList(DataFetcher.storedListId^)
    -> DataFetcher.getListWords
    -> Utils.shuffle;
  };

  {
  ...component,
  initialState: () => {isGameOn: true, currentIdx: 0, flipped: false, deck: [||]},
  
  reducer: (action, state) => 
    switch (action) {
    | Next =>
        if (state.currentIdx < Array.length(state.deck) - 1)
            ReasonReact.Update({...state, currentIdx: state.currentIdx + 1})
        else
            ReasonReact.Update({...state, isGameOn: false, currentIdx:0, deck: [||]})
    
    | Flip => ReasonReact.Update({...state, flipped: true})
    | Unflip => ReasonReact.Update({...state, flipped: false})
    | Restart => ReasonReact.Update({...state, isGameOn: true, deck: getShuffledDeck()}) /*shuffle*/
    | _ => ReasonReact.Update({...state, deck: getShuffledDeck()}) /*check later*/
    },

  didMount: self => {
    self.send(Restart);
  },

  render: self => {
      let cardClass = "card" ++ (self.state.flipped ? " card--flipped" : ""); 
      
      let currentWord = 
        switch (Array.length(self.state.deck)) {
        | 0 => DataFetcher.nullWord
        | _ => self.state.deck[self.state.currentIdx]
        };
      

      <div className="gamecontainer">
        <Header message="Words"/>

        <div className=cardClass
            onMouseDown=(_event => self.send(Flip))
            onTouchStart=(_event => self.send(Flip))
            onMouseUp=(_event => self.send(Unflip))
            onTouchEnd=(_event => self.send(Unflip))
        >
            <div className="front">
                <span>(ReasonReact.string(currentWord.eng))</span>
            </div>
            <div className="back">
                <span>(ReasonReact.string(currentWord.text))</span>
            </div>
        </div>

        <div className="buttons">
            <button
                className="button button-s"
                onClick=(_event => ReasonReact.Router.push("/lists"))>
                (ReasonReact.string("Back"))
            </button>
        
            (if (self.state.isGameOn) {
                (<button className="button button-big button--primary"
                    onClick=(_event => self.send(Next))>
                    (ReasonReact.string("Next"))
                </button>)
            } else {
                (<button className="button button-big button--primary"
                    onClick=(_event => self.send(Restart))>
                    (ReasonReact.string("Restart"))
                </button>)
            })
        </div>
      </div>
  }
}

};