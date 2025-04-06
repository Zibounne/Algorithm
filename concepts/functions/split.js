/*
Syntax:
string.split(separator, limit)

Parameters:
separator	Optional.
A string or regular expression to use for splitting.
If omitted, an array with the original string is returned.

limit	Optional.
An integer that limits the number of splits.
Items after the limit are excluded.

Return Value
Array	An array containing the splitted values.
*/

let text = "How are you doing today?";
let array = text.split(" ");
let word = array[0];

console.log(array);
console.log(word);
