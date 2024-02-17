class Node{
    constructor(number, next){
        this.number=number,
        this.next=next
    }
}

function List() {
    var head;
    var numbers=[8, 5, 1, 3, 4, 9];
    while (head==null) {
        for (let i = 0, len = 6; i < len; i++) {
            var node=new Node();
            node.number=numbers[i];
            node.next=head;
            head=node;
            console.log(head);
        }
    }
    return head;
}
List()

