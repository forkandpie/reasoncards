let component = ReasonReact.statelessComponent("ListItem");


let make = (~name, ~id, _children) => {
    ...component,
    render: self => {
        <div className="listItem" onClick=(_event => ReasonReact.Router.push("lists/" ++ string_of_int(id)))>
            (ReasonReact.string(name))
        </div>
    }
}