import java.util.ArrayList;

class MaxHeap {
    private ArrayList<Integer> heap;

    public MaxHeap() {
        heap = new ArrayList<>();
    }

    public void insert(int val) {
        heap.add(val);
        percolateUp(heap.size() - 1);
    }

    public int getMax() {
        if (heap.size() == 0) return -1;
        return heap.get(0);
    }

    private void percolateUp(int index) {
        if (index <= 0) return;
        int parent = (index - 1) / 2;
        if (heap.get(index) > heap.get(parent)) {
            int temp = heap.get(index);
            heap.set(index, heap.get(parent));
            heap.set(parent, temp);
            percolateUp(parent);
        }
    }
}

public class HeapTest {
    public static void main(String[] args) {
        MaxHeap maxHeap = new MaxHeap();
        maxHeap.insert(10);
        maxHeap.insert(30);
        maxHeap.insert(20);
        maxHeap.insert(50);

        assert maxHeap.getMax() == 50 : "Erreur: Le max devrait être 50";
        System.out.println("Test Java Max-Heap réussi !");
    }
}

