Linked lists in C++ are a data structure used for storing and organizing data. They are built using nodes that contain both data and a pointer to the next node in the list. Here are some key features of linked lists in C++:

## Dynamic size:
Linked lists can grow or shrink dynamically, meaning you can add or remove nodes as needed without having to allocate or deallocate a fixed amount of memory.

Here is an example of creating and manipulating a linked list in C++ with dynamic size:

```
#include <iostream>
using namespace std;

// Node class to define structure of each node in the linked list
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// LinkedList class to define operations on the linked list
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }
    // Function to add a new node to the end of the list
    void add(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new_node;
        }
    }
    // Function to print the entire linked list
    void print() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Driver code to test the linked list
int main() {
    LinkedList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.print(); // Output: 10 20 30
    return 0;
}

```

## std::list
Here's an example of using the std::list container in C++ along with some of its commonly used methods and functions:

```
#include <iostream>
#include <list>

int main() {
  std::list<int> mylist;

  // Add elements to the list using push_back()
  mylist.push_back(1);
  mylist.push_back(2);
  mylist.push_back(3);
  mylist.push_back(4);

  // Add elements to the list using push_front()
  mylist.push_front(0);
  mylist.push_front(-1);

  // Insert element 5 at position 5 using insert()
  auto it = mylist.begin();
  std::advance(it, 5);
  mylist.insert(it, 5);

  // Print the elements of the list using a range-based for loop
  for (auto& i : mylist) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // Get the size of the list using size()
  std::cout << "Size of the list: " << mylist.size() << std::endl;

  // Remove the first and last elements of the list using pop_front() and pop_back()
  mylist.pop_front();
  mylist.pop_back();

  // Remove the element at position 2 using erase()
  it = mylist.begin();
  std::advance(it, 2);
  mylist.erase(it);

  // Reverse the order of the elements in the list using reverse()
  mylist.reverse();

  // Sort the elements of the list using sort()
  mylist.sort();

  // Print the sorted list
  for (auto& i : mylist) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // Clear the list using clear()
  mylist.clear();

  // Check if the list is empty using empty()
  std::cout << "Is the list empty? " << (mylist.empty() ? "Yes" : "No") << std::endl;

  return 0;
}

```
## Diferences between std::list and std::vector
In C++, std::list and std::vector are two different container classes provided by the Standard Template Library (STL) with distinct characteristics and intended use cases.

Here are some key differences between std::list and std::vector:

* Memory Allocation: std::vector uses a contiguous block of memory to store its elements, while std::list uses a doubly-linked list. This means that adding or removing elements from a std::list is faster than std::vector as it doesn't require reallocating the entire block of memory.

* Accessing Elements: std::vector provides fast random access to elements, while std::list does not. Accessing an element in std::vector takes O(1) time, while accessing an element in std::list requires O(n) time since it needs to traverse the list starting from the beginning or the end.

* Inserting and Removing Elements: Inserting and removing elements in std::list is generally faster than std::vector. Inserting or removing an element in std::list only requires changing a few pointers, whereas in std::vector, it may require copying and reallocating the entire block of memory.

* Iterators: std::vector provides both random access iterators and forward iterators, while std::list provides bidirectional iterators. Random access iterators allow you to jump to any element in the container in constant time, while forward iterators allow you to iterate over the container one element at a time. Bidirectional iterators provide access to the previous element in the container.

In summary, std::vector is best used when you need to store a large number of elements that you'll be accessing frequently in random order. std::list is best used when you need to frequently insert or remove elements from the container or need to iterate over the container in a forward or backward direction.