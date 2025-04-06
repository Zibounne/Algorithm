/*
The parseInt method parses a value as a string and returns the first integer.

A radix parameter specifies the number system to use:

2 = binary, 8 = octal, 10 = decimal, 16 = hexadecimal.

If the first character cannot be converted, NaN is returned.

Leading and trailing spaces are ignored.

Only the first integer found is returned

Syntax
parseInt(string, radix)
*/

let a = "45";
let result = parseInt(a, 10);

console.log(result);
