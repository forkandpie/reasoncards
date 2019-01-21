// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var Random = require("bs-platform/lib/js/random.js");
var Caml_array = require("bs-platform/lib/js/caml_array.js");

function shuffle(arr) {
  var copy = $$Array.copy(arr);
  Random.init(Date.now() | 0);
  for(var i = arr.length - 1 | 0; i >= 0; --i){
    var rand = Random.$$int(i + 1 | 0);
    var temp = Caml_array.caml_array_get(copy, rand);
    Caml_array.caml_array_set(copy, rand, Caml_array.caml_array_get(copy, i));
    Caml_array.caml_array_set(copy, i, temp);
  }
  return copy;
}

exports.shuffle = shuffle;
/* No side effect */
