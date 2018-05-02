[@bs.obj]
external makeProps :
  (~className: string=?, ~component: 'union_rweq=?, unit) => _ =
  "";

[@bs.module "material-ui/Table/TableHead"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~className: option(string)=?,
      ~component: option([ | `String(string) | `Callback('genericCallback)])=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~className?,
        ~component=?
          Js.Option.map(
            (. v) => MaterialUi_Helpers.unwrapValue(v),
            component,
          ),
        (),
      ),
    children,
  );