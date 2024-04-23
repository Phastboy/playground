#!/usr/bin/env node

function spread(arrayOne, arrayTwo) {
  return [...arrayOne, ...arrayTwo];
}

console.log(spread([1, 2, 3, 4], [5, 6, 7]));
