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
