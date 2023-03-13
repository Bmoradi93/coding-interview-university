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
