let input = require('fs').readFileSync('/dev/stdin', 'utf-8');
let lines = input.split('\n');

let valueA = parseInt(lines.shift());
let valueB = parseInt(lines.shift());

console.log(`SOMA = ${valueA + valueB}`);