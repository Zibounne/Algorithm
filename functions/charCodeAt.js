/*
charCodeAt() is UTF-16
charCodeAt() returns a number between 0 and 65535.

Syntax:
string.charCodeAt(index)
*/

let a = "5";
let b = "7";
let c = "10"
let d = "-5";
let e = "-45";

console.log(
    a.charCodeAt(0) + ", " + b.charCodeAt(0) + "\n" + 
    c.charCodeAt(0) + " " + c.charCodeAt(1) + "\n" + 
    d.charCodeAt(0) + " " + d.charCodeAt(1) + "\n" + 
    e.charCodeAt(0) + " " + e.charCodeAt(1) + " " + e.charCodeAt(2) + "\n"
);
