open Belt;

let component = ReasonReact.statelessComponent("WordPage");

let make = (~id, _children) => {

  let startGame = (event, self) => {
    DataFetcher.setListId(int_of_string(id));
    ReasonReact.Router.push("/game");
  };

  {
    ...component,

    

    render: self => {
      let listId = int_of_string(id);

      <div>
        <Header message="Words"/>

        <div className="listpage">
          <table className="word_table">
            <tbody>
              (DataFetcher.getList(listId)
              -> DataFetcher.getListWords
              -> (Array.mapWithIndex((index, word) => 
                  <WordItem key=string_of_int(word.id) text=word.text />))
              -> ReasonReact.array)
            </tbody>
          </table>
        </div>
        
        <div className="buttons">
          <button className="button button-big button--primary"
            onClick={self.handle(startGame)}
          >
            (ReasonReact.string("Start"))
          </button>
        </div>

      </div>
    }
  }
};
