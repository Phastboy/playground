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

function sum(range) {
  let sum=0;
  for (let i = 0; i < range.length; i++) {
    sum+=range[i];
  }
  return sum;
}
console.log(sum(range(1, 10)));
