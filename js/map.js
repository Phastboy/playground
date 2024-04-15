var people=[
  {
      name: "pelumi",
      phone: "+2348059748347"
  },
  {
      name: "kehinde",
      phone: "+2349066990029"
  }
]

const names = people.map((person)=>{
    return person.name
});
console.log(names)
