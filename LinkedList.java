import java.util.*;

class Main {
  public static void main(String[] args) {
    System.out.println("Hello world!");
    
    LinkedList l = new LinkedList();

    l.LinkedList();

    for(int i = 0; i<=10; i++){
      l.AddLast(i);
    }

    for(int i = 11; i<=20; i++){
      l.AddFirst(i);
    }

    l.printList(l.head);

    System.out.println(l.getSize());

    // l.deleteNodeByIndex(l.head, 5);
    
    l.reverseList(l.head);

    l.printList(l.head);
  }
}
