class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node

    def get_at(self, index):
        current = self.head
        count = 0
        while current:
            if count == index:
                return current.data
            count += 1
            current = current.next
        return None

if __name__ == "__main__":
    ll = LinkedList()
    ll.append(10)
    ll.append(20)
    
    assert ll.get_at(0) == 10, "Erreur à l'index 0"
    assert ll.get_at(1) == 20, "Erreur à l'index 1"
    print("Test Python Linked List réussi !")

