#!/usr/bin/env node

class Node{
    constructor(number, next){
        this.number=number,
        this.next=next
    }
}

function List(numbers) {
  var head;
  while (head==null) {
      for (let i = 0; i < numbers.length; i++) {
          var node=new Node();
          node.number=numbers[i];
          node.next=head;
          head=node;
          console.log(head);
      }
  }
  return head;
}
List([8, 5, 1, 3, 4, 9]);

function list(array) {
  for (let i = 0; i < array.length; i++) {
    list={value: array[i], rest: list}
  }
  return list;
}

console.log(list([1,2,3]));
