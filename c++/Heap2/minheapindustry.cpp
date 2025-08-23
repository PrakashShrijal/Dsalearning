#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class MinHeap {
private:
    std::vector<int> heap;

    // Helper functions
    void heapifyUp(int index) {
        while (index > 0 && heap[parent(index)] > heap[index]) {
            std::swap(heap[parent(index)], heap[index]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int smallest = index;
        int left = leftChild(index);
        int right = rightChild(index);
        int size = heap.size();

        if (left < size && heap[left] < heap[smallest])
            smallest = left;
        
        if (right < size && heap[right] < heap[smallest])
            smallest = right;
        
        if (smallest != index) {
            std::swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

    // Index calculations (using bit operations for efficiency)
    static constexpr int parent(int i) noexcept { return (i - 1) >> 1; }
    static constexpr int leftChild(int i) noexcept { return (i << 1) + 1; }
    static constexpr int rightChild(int i) noexcept { return (i << 1) + 2; }

public:
    // Constructor
    MinHeap() = default;

    // Build heap from existing array (O(n) time)
    explicit MinHeap(const std::vector<int>& array) : heap(array) {
        for (int i = parent(heap.size() - 1); i >= 0; --i) {
            heapifyDown(i);
        }
    }

    // Basic operations
    void push(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    int pop() {
        if (heap.empty())
            throw std::out_of_range("Heap is empty");
        
        int min = heap.front();
        heap[0] = heap.back();
        heap.pop_back();
        
        if (!heap.empty())
            heapifyDown(0);
        
        return min;
    }

    int peek() const {
        if (heap.empty())
            throw std::out_of_range("Heap is empty");
        return heap.front();
    }

    // Utility methods
    bool empty() const noexcept { return heap.empty(); }
    size_t size() const noexcept { return heap.size(); }

    // For demonstration
    void display() const {
        for (int val : heap) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    // Bonus: Heap sort (in-place, descending order)
    static void heapSort(std::vector<int>& array) {
        MinHeap heap(array);
        for (size_t i = 0; i < array.size(); ++i) {
            array[i] = heap.pop();
        }
    }
};

int main() {
    // Example usage
    MinHeap heap;
    heap.push(5);
    heap.push(2);
    heap.push(8);
    heap.push(1);
    heap.push(3);

    std::cout << "Min heap: ";
    heap.display();  // Output: 1 2 8 5 3 

    std::cout << "Min element: " << heap.pop() << "\n";  // 1
    std::cout << "New heap: ";
    heap.display();  // Output: 2 3 8 5

    // Heap sort example
    std::vector<int> arr = {9, 4, 7, 1, 2, 6};
    MinHeap::heapSort(arr);
    
    std::cout << "Heap sorted (descending): ";
    for (int num : arr) std::cout << num << " ";
    
    return 0;
}
