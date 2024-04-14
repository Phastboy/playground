#!/usr/bin/env node
/*
 * A right angled triangle
 */
var height=process.argv[2];
function triangle(height) {
  let bar='';
  for (let i = 0; i < height; i++) {
    bar+='#';
    console.log(bar);
  }
}
triangle(height);
