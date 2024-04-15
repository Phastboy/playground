#!/snap/bin/node

function reverseStr(params) {
  reverse=params.split('').reverse().join('');
  console.log(reverse);
  return reverse;
}

reverseStr('pelumi');
