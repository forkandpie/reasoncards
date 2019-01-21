open Belt;

type state = {
  count: int,
  show: bool,
};

type action =
  | Click
  | Toggle;

let component = ReasonReact.reducerComponent("ListPage");

let make = (_children) => {
  ...component,
  initialState: () => {count: 0, show: true},

  reducer: (action, state) =>
    switch (action) {
    | Click => ReasonReact.Update({...state, count: state.count + 1})
    | Toggle => ReasonReact.Update({...state, show: ! state.show})
    },

  render: self => {

    <div>
      <Header message="Lists"/>
      
      <div className="listpage">
        
        (DataFetcher.getWordLists
        -> (Array.mapWithIndex((index, list) => 
            <ListItem key=string_of_int(list.id) id=list.id name=list.name />))
        -> ReasonReact.array)

        /* <button className="button" onClick=(_event => self.send(Click))>
          (ReasonReact.string("Add"))
        </button> */

      </div>
    </div>
  },
};
