#!/usr/bin/env node

function range(a, b, c=1) {
  let range=[];
  if (c>0) {
    for (let i = a; i <= b; i+=c) {
    range.push(i);
    }
  } else {
    for (let i = a; i >= b; i+=c) {
    range.push(i);
    }
  }
  return range;
}
console.log(range(17, 3, -2));

function sum(range) {
  let sum=0;
  for (let i = 0; i < range.length; i++) {
    sum+=range[i];
  }
  return sum;
}
console.log(sum(range(1, 10)));
