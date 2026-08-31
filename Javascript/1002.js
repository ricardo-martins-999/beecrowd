const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const n = 3.14159;
const raio = parseFloat(lines.shift());
const area = n * Math.pow(raio, 2);

console.log(`A=${area.toFixed(4)}`);
