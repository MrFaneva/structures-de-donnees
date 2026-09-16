class Node {
    int data;
    Node next;
    Node(int d) { data = d; next = null; }
}

class LinkedList {
    Node head;

    public void append(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node last = head;
        while (last.next != null) {
            last = last.next;
        }
        last.next = newNode;
    }

    public int getAt(int index) {
        Node current = head;
        int count = 0;
        while (current != null) {
            if (count == index) return current.data;
            count++;
            current = current.next;
        }
        return -1;
    }
}

public class LinkedListTest {
    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.append(10);
        ll.append(20);

        // En Java, on utilise le mot-clé standard assert (doit être activé avec -ea)
        assert ll.getAt(0) == 10 : "Erreur à l'index 0";
        assert ll.getAt(1) == 20 : "Erreur à l'index 1";

        System.out.println("Test Java Linked List réussi !");
    }
}

