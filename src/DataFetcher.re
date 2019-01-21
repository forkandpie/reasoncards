open Belt.Array;

type word = {
    id: int,
    text: string,
    eng: string,
    hint: string
}

type wordlistShort = {
    name: string,
    id: int
}

type wordList = {
    id: int,
    words: array(word)
}

let nullWord = {
    id: -1,
    text: "No words left!",
    eng: "Restart?",
    hint: ""
};

let getWordLists:array(wordlistShort) = {
    [| 
        {id: 1, name: {js|Self-Presentation|js}},
        {id: 2, name: "Countries & Cities"},
        {id: 3, name: "Numbers"}
        
    |]
}


let dictionary:array(wordList) = [|
    {
        id: 1,/*  Self-presentation  */
        words: [| 
            {id: 1, eng: "What is your name?", text: {js|Wéi heeschs du?|js}, hint: ""},
            {id: 2, eng: "What is Your name?", text: {js|Wéi heescht Dir?|js}, hint: ""},
            {id: 3, eng: "What is his name?", text: {js|Wéi heescht Dir?|js}, hint: ""},
            {id: 4, eng: "My name is Anton", text: {js|Ech heeschen Anton|js}, hint: ""},
            {id: 5, eng: "I am Carina", text: {js|Ech sinn d'Carina|js}, hint: ""},
            {id: 6, eng: "How are you?", text: {js|Wéi geet et dir?|js}, hint: ""},
            {id: 7, eng: "How are you?", text: {js|Wéi geet et?|js}, hint: "(casual)"},
            {id: 8, eng: "How are You?", text: {js|Wéi geet et Iech?|js}, hint: ""}
        |]
    },
    {
        id: 2,/*  Countries  */
        words: [| 
            {id: 1, eng: "Belgium", text: {js|Belsch|js}, hint: ""},
            {id: 2, eng: "belgian", text: {js|belsch|js}, hint: ""},
            {id: 3, eng: "France", text: {js|Frankräich|js}, hint: ""},
            {id: 4, eng: "french", text: {js|franséisch|js}, hint: ""},
            {id: 5, eng: "Russia", text: {js|Russland|js}, hint: ""}
        |]
    },
    {
        id: 3,/*  Numbers  */
        words: [| 
            {id: 1, eng: "1", text: {js|eent|js}, hint: ""},
            {id: 2, eng: "2", text: {js|zwee|js}, hint: ""},
            {id: 3, eng: "3", text: {js|dräi|js}, hint: ""},
            {id: 4, eng: "4", text: {js|véier|js}, hint: ""},
            {id: 5, eng: "5", text: {js|fënnef|js}, hint: ""},
            {id: 6, eng: "6", text: {js|sechs|js}, hint: ""},
            {id: 7, eng: "7", text: {js|siwen|js}, hint: ""},
            {id: 8, eng: "8", text: {js|aacht|js}, hint: ""},
            {id: 9, eng: "9", text: {js|néng|js}, hint: ""},
            {id: 10, eng: "10", text: {js|zéng|js}, hint: ""}
        |]
    }
|]

let getList = (listId:int) => {
    dictionary->keep(listObj => listObj.id == listId)[0]
}

let getListWords = (wordList:wordList) => wordList.words;

let storedListId = ref(0);

let setListId = (lId:int) => {
    storedListId := lId;
}
