/*
Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)

"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"

Notes:

If either input is an empty string, consider it as zero.

Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)
*/

const a = "5";
const b = "7";

function sumString(a, b) {
    let num1;
    let num2;

    if (a === "") {
        num1 = 0;
    } else {
        num1 = parseInt(a, "10");
    }

    if (b === "") {
        num2 = 0;
    } else {
        num2 = parseInt(b, "10");
    }

    let sum = num1 + num2;
    return sum.toString();
}

console.log((sumString(a, b)));
