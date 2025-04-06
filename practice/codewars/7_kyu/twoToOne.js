/*
Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string (alphabetical ascending), the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

Examples:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
*/

function longest(s1, s2) {
    let concat = s1 + s2;
    let array = concat.split("");
    array.sort();
    let unique = [...new Set(array)];
    let result = unique.join("");

    return result;
}

longest("xyaabbbccccdefww", "xxxxyyyyabklmopq");
