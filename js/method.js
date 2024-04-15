const friends=[
  {
    name: "Gr8 Pholex bahdo",
    age: 22
  },{
    name: "Diadem",
    age: 21
  },{
    name: "Mary",
    age: 21
  },{
    name: "Alaska",
    age: 27
  },{
    name: "Taiwo",
    age: 19
  },{
    name: "Moyo",
    age: 18
  },{
    name: "Hikmat",
    age: 8
  }
]

const filtered=friends.filter((friend)=>{
  return friend.age<=20
})
console.log(filtered)

const map=friends.map((item) => {
  return item.name
});
console.log(map)

const find=friends.find((item) => {
  return item.age==8
})
// i think find will always return 1 item
console.log(find)

// friends.forEach(element => {
//   console.log(element)
// });
