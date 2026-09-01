let input = require('fs').readFileSync('/dev/stdin', 'utf-8');
let lines = input.split('\n');

let valueA = parseFloat(lines.shift());
let valueB = parseFloat(lines.shift());
let valueC = parseFloat(lines.shift());

console.log(`MEDIA = ${(((valueA * 2) + (valueB * 3) + (valueC * 5)) / 10).toFixed(1)}`);