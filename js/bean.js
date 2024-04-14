#!/snap/bin/node

function countChar(string, char) {
  let totalB=0;
  for (let i = 0; i < string.length; i++) {
    if (string[i].toUpperCase()==char.toUpperCase()) {
      totalB+=1;
    }
  }
  return totalB;
}
let string='hammed anuoluwapo pelumi';
console.log(countChar(string, 'w'));
