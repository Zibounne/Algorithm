/*
JavaScript Function Syntax
A JavaScript function is defined with the function keyword, followed by a name, followed by parentheses ().

Function names can contain letters, digits, underscores, and dollar signs (same rules as variables).

The parentheses may include parameter names separated by commas:
(parameter1, parameter2, ...)

The code to be executed, by the function, is placed inside curly brackets: {}

function name(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/

// Function is called, the return value will end up in x
let x = myFunction(4, 3);

function myFunction(a, b) {
// Function returns the product of a and b
  return a * b;
}

function toCelsius(fahrenheit) {
    return (5/9) * (fahrenheit-32);
}
  
let value = toCelsius;
// As you see from the examples above, toCelsius refers to the function object, and toCelsius() refers to the function result.

function sayHello(name) {
    return `Hello, ${name}!`;
}

console.log(sayHello("Alice")); // "Hello, Alice!"

function welcome(name = "Guest") {
    return `Welcome, ${name}`;
}
  
console.log(welcome()); // "Welcome, Guest"

// const greet = (name) => console.log(name)
const sayHello = (name) => {
    console.log(`Hello, ${name}!`);
};

sayHello("Alice"); // => Hello, Alice!

// setTimeout(function() { ... }, 1000)
setTimeout(function() {
  console.log("after 2 secondes.");
}, 2000);
