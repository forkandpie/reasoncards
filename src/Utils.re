/*
Knuth-Fisher-Yates shuffle
for (int i = cards.Length - 1; i > 0; i--)
{
  int n = rand.Next(i + 1);
  Swap(ref cards[i], ref cards[n]);
} */

let shuffle = (arr:array('a)) => {
    
    let copy = Array.copy(arr);
    let seed = Random.init(int_of_float(Js.Date.now()));

    for (i in Array.length(arr) - 1 downto 0) {
        let rand = Random.int(i + 1);
        let temp = copy[rand];
        copy[rand] = copy[i];
        copy[i] = temp;
    };
    
    copy;
}