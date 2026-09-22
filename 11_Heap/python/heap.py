class MaxHeap:
    def __init__(self):
        self.heap = []

    def insert(self, val):
        self.heap.append(val)
        self._percolate_up(len(self.heap) - 1)

    def get_max(self):
        return self.heap[0] if self.heap else None

    def _percolate_up(self, index):
        parent = (index - 1) // 2
        if index > 0 and self.heap[index] > self.heap[parent]:
            self.heap[index], self.heap[parent] = self.heap[parent], self.heap[index]
            self._percolate_up(parent)

if __name__ == "__main__":
    max_heap = MaxHeap()
    max_heap.insert(10)
    max_heap.insert(30)
    max_heap.insert(20)
    max_heap.insert(50)  # Le plus grand
    
    assert max_heap.get_max() == 50, "Erreur: Le max devrait être 50"
    print("Test Python Max-Heap réussi !")

