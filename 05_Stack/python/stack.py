class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if self.is_empty():
            raise IndexError("Pop depuis une pile vide")
        return self.items.pop()

    def peek(self):
        if self.is_empty():
            raise IndexError("Peek depuis une pile vide")
        return self.items[-1]

if __name__ == "__main__":
    pile = Stack()
    pile.push(10)
    pile.push(20)
    assert pile.peek() == 20
    assert pile.pop() == 20
    assert pile.peek() == 10
    print("Test Python Stack réussi !")

