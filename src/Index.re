let watcherID = ReasonReact.Router.watchUrl(url => {
    switch (url.path) {
    | ["lists"] => ReactDOMRe.renderToElementWithId(<ListPage />, "index2");
    | ["lists", id] => ReactDOMRe.renderToElementWithId(<WordsPage id/>, "index2");
    | ["game"] => ReactDOMRe.renderToElementWithId(<GamePage/>, "index2");
    | _ => ReactDOMRe.renderToElementWithId(<ListPage />, "index2");
    }
});

/* ReactDOMRe.renderToElementWithId(<Header message="Hello! " />, "index1"); */
ReactDOMRe.renderToElementWithId(<ListPage />, "index2");