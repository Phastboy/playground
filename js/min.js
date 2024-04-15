#!/snap/bin/node

function min(a, b) {
  if (a<b) {
    return a;
  } else if(b<a) {
    return b;
  } else {
    result='they are probably equal';
    return result;
  }
}
console.log(min(6, 3));
