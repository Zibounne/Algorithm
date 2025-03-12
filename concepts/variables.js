/*
JavaScript Variables can be declared in 4 ways:

Automatically
Using var
Using let
Using const

The var keyword was used in all JavaScript code from 1995 to 2015.

The let and const keywords were added to JavaScript in 2015.

The var keyword should only be used in code written for older browsers.

When to Use var, let, or const?
1. Always declare variables

2. Always use const if the value should not be changed

3. Always use const if the type should not be changed (Arrays and Objects)

4. Only use let if you can't use const

5. Only use var if you MUST support old browsers.

Note
Variables are containers for storing values.

Note
JavaScript identifiers are case-sensitive.

In JavaScript, the equal sign (=) is an "assignment" operator, not an "equal to" operator.
The "equal to" operator is written like == in JavaScript.
*/

let x = 5;
let y = 10;
let z = x + y;

const a = 5;
const b = 10;
const c = a + b;


console.log(z + ", " + c);
