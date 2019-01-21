let component = ReasonReact.statelessComponent("WordItem");


let make = (~text, _children) => {
    ...component,
    render: self => {
        <tr className="wordItem">
            <td>(ReasonReact.string(text))</td>
        </tr>
    }
}