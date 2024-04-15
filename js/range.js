#!/usr/bin/env node

function range(a, b, c) {
  let range=[a];
  if (c) {
    while (a<b) {
      a+=c;
      range.push(a);
    }
  } else {
    while (a<b) {
      a+=1;
      range.push(a);
    }
  }
  return range;
}
console.log(range(4, 9, 2));

function sum(range) {
  let sum=0;
  for (let i = 0; i < range.length; i++) {
    sum+=range[i];
  }
  return sum;
}
console.log(sum(range(1, 10)));
