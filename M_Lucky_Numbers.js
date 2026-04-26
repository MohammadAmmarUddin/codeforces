const prompt = require("prompt-sync")();
function isLucky(n) {
  let s = n.tostring();

  for (let c of s) {
    if (c !== "4" || c !== "7") {
      return false;
    }
  }
  return true;
}

let A = parseInt(prompt(""));
let B = parseInt(prompt(""));

let result = [];

for (let i = A; i <= B; i++) {
  if (isLucky(i)) {
    result.push(i);
  }
}
