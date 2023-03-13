## Heap data structure 
A heap is a specialized tree-based data structure that is commonly used as an efficient way to implement a priority queue. It is a complete binary tree, which means that all levels of the tree are completely filled except possibly the last level, which is filled from left to right.

A heap has two key properties:

* Heap order property: In a min-heap, for any node i, the value of the parent node j is less than or equal to the value of node i. In a max-heap, for any node i, the value of the parent node j is greater than or equal to the value of node i.
Shape property: A heap must be a complete binary tree.
* Heap operations are usually implemented using an array. In a binary heap, the root element is always at the index 0. For any element at index i, its left child is at index 2*i+1 and its right child is at index 2*i+2.

There are two main types of heaps: min-heap and max-heap. In a min-heap, the smallest element is at the root, while in a max-heap, the largest element is at the root.

Some common operations on a heap include:

* insert(): Adds a new element to the heap.
* delete(): Removes the minimum or maximum element from the heap.
* peek(): Returns the minimum or maximum element without removing it.
* heapify(): Converts an array into a heap in O(n) time.
Here is an example C++ code to create a max-heap and perform some basic heap operations:

```
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> maxHeap; // create a max-heap

    // insert elements into the heap
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(15);
    maxHeap.push(30);
    maxHeap.push(5);

    // print the top element
    cout << "Top element: " << maxHeap.top() << endl;

    // pop the top element
    maxHeap.pop();

    // print the top element after popping
    cout << "Top element after popping: " << maxHeap.top() << endl;

    // check if the heap is empty
    if (maxHeap.empty()) {
        cout << "Heap is empty" << endl;
    } else {
        cout << "Heap is not empty" << endl;
    }

    // print the size of the heap
    cout << "Heap size: " << maxHeap.size() << endl;

    return 0;
}

```