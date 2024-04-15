#!/snap/bin/node

var date = new Date();
console.log("Date:", date.toDateString());
console.log("Time:", date.toTimeString());

var today=new Date().toLocaleDateString('en-GB', {
  day: 'numeric',
  month: 'short',
  year: 'numeric'
});
console.log('today:', today);
