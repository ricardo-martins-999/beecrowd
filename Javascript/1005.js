let input = require('fs').readFileSync('/dev/stdin', 'utf-8');
let lines = input.split('\n');

let valueA = parseFloat(lines.shift());
let valueB = parseFloat(lines.shift());

console.log(`MEDIA = ${(((valueA * 3.5) + (valueB * 7.5)) / (3.5 + 7.5)).toFixed(5)}`);