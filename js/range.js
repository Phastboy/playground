#!/usr/bin/env node

function range(a, b) {
  let range=[a];
  while (a<b) {
    a+=1;
    range.push(a);
  }
  return range;
}
console.log(range(4, 9));
