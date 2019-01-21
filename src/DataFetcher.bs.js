// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var Belt_Array = require("bs-platform/lib/js/belt_Array.js");
var Caml_array = require("bs-platform/lib/js/caml_array.js");

var getWordLists = /* array */[
  /* record */[
    /* name */"Self-Presentation",
    /* id */1
  ],
  /* record */[
    /* name */"Countries & Cities",
    /* id */2
  ],
  /* record */[
    /* name */"Numbers",
    /* id */3
  ]
];

var dictionary = /* array */[
  /* record */[
    /* id */1,
    /* words : array */[
      /* record */[
        /* id */1,
        /* text */"Wéi heeschs du?",
        /* eng */"What is your name?",
        /* hint */""
      ],
      /* record */[
        /* id */2,
        /* text */"Wéi heescht Dir?",
        /* eng */"What is Your name?",
        /* hint */""
      ],
      /* record */[
        /* id */3,
        /* text */"Wéi heescht Dir?",
        /* eng */"What is his name?",
        /* hint */""
      ],
      /* record */[
        /* id */4,
        /* text */"Ech heeschen Anton",
        /* eng */"My name is Anton",
        /* hint */""
      ],
      /* record */[
        /* id */5,
        /* text */"Ech sinn d\'Carina",
        /* eng */"I am Carina",
        /* hint */""
      ],
      /* record */[
        /* id */6,
        /* text */"Wéi geet et dir?",
        /* eng */"How are you?",
        /* hint */""
      ],
      /* record */[
        /* id */7,
        /* text */"Wéi geet et?",
        /* eng */"How are you?",
        /* hint */"(casual)"
      ],
      /* record */[
        /* id */8,
        /* text */"Wéi geet et Iech?",
        /* eng */"How are You?",
        /* hint */""
      ]
    ]
  ],
  /* record */[
    /* id */2,
    /* words : array */[
      /* record */[
        /* id */1,
        /* text */"Belsch",
        /* eng */"Belgium",
        /* hint */""
      ],
      /* record */[
        /* id */2,
        /* text */"belsch",
        /* eng */"belgian",
        /* hint */""
      ],
      /* record */[
        /* id */3,
        /* text */"Frankräich",
        /* eng */"France",
        /* hint */""
      ],
      /* record */[
        /* id */4,
        /* text */"franséisch",
        /* eng */"french",
        /* hint */""
      ],
      /* record */[
        /* id */5,
        /* text */"Russland",
        /* eng */"Russia",
        /* hint */""
      ]
    ]
  ],
  /* record */[
    /* id */3,
    /* words : array */[
      /* record */[
        /* id */1,
        /* text */"eent",
        /* eng */"1",
        /* hint */""
      ],
      /* record */[
        /* id */2,
        /* text */"zwee",
        /* eng */"2",
        /* hint */""
      ],
      /* record */[
        /* id */3,
        /* text */"dräi",
        /* eng */"3",
        /* hint */""
      ],
      /* record */[
        /* id */4,
        /* text */"véier",
        /* eng */"4",
        /* hint */""
      ],
      /* record */[
        /* id */5,
        /* text */"fënnef",
        /* eng */"5",
        /* hint */""
      ],
      /* record */[
        /* id */6,
        /* text */"sechs",
        /* eng */"6",
        /* hint */""
      ],
      /* record */[
        /* id */7,
        /* text */"siwen",
        /* eng */"7",
        /* hint */""
      ],
      /* record */[
        /* id */8,
        /* text */"aacht",
        /* eng */"8",
        /* hint */""
      ],
      /* record */[
        /* id */9,
        /* text */"néng",
        /* eng */"9",
        /* hint */""
      ],
      /* record */[
        /* id */10,
        /* text */"zéng",
        /* eng */"10",
        /* hint */""
      ]
    ]
  ]
];

function getList(listId) {
  return Caml_array.caml_array_get(Belt_Array.keep(dictionary, (function (listObj) {
                    return listObj[/* id */0] === listId;
                  })), 0);
}

function getListWords(wordList) {
  return wordList[/* words */1];
}

var storedListId = /* record */[/* contents */0];

function setListId(lId) {
  storedListId[0] = lId;
  return /* () */0;
}

var nullWord = /* record */[
  /* id */-1,
  /* text */"No words left!",
  /* eng */"Restart?",
  /* hint */""
];

exports.nullWord = nullWord;
exports.getWordLists = getWordLists;
exports.dictionary = dictionary;
exports.getList = getList;
exports.getListWords = getListWords;
exports.storedListId = storedListId;
exports.setListId = setListId;
/* No side effect */