#!/snap/bin/node

let board='';
var height=process.argv[2];
for (let i = 0; i < height; i++) {
  for (let j = 0; j < height; j++) {
    if ((i+j)%2==0) {
      board+=' ';
    } else {
      board+='#'
    }
  }
  board+='\n';
}
console.log(board);
