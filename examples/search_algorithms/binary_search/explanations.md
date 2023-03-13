## Binary search:
Binary search is a search algorithm that works by repeatedly dividing the search interval in half. It's an efficient algorithm that has a time complexity of O(log n), where n is the size of the input array. Binary search should be applied when the array has already been sorted. Otherwise you cannot use binary search. If you have a large quantity of queries, it would better to sort the array first, then apply binary search.

### Binary Search: Implementation using a sorted array

```
#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 5;
    int result = binarySearch(arr, target);
    if (result == -1) {
        std::cout << "Target not found\n";
    } else {
        std::cout << "Target found at index " << result << "\n";
    }
    return 0;
}
```

### Binary Search: Implementation using recursion

Binary search can also be implemented using recursion. Here's an example of binary search using recursion in C++:

```
#include <iostream>
#include <vector>

int binarySearchRecursive(std::vector<int> arr, int left, int right, int target) {
    if (left > right) {
        return -1; // Target not found
    }
    int mid = (left + right) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);
    } else {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 5;
    int result = binarySearchRecursive(arr, 0, arr.size() - 1, target);
    if (result == -1) {
        std::cout << "Target not found\n";
    } else {
        std::cout << "Target found at index " << result << "\n";
    }
    return 0;
}

```

## Binary Search Tree (searching for int values) - C++ Implementation


```
#include <iostream>
using namespace std;

// Define a struct for each node in the binary search tree
struct Node {
    int key;
    Node* left;
    Node* right;
};

// Define a function to create a new node with a given key
Node* createNode(int key) {
    Node* node = new Node;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Define a function to insert a new node with a given key into the binary search tree
Node* insertNode(Node* root, int key) {
    // If the root is null, create a new node with the given key and return it
    if (root == NULL) {
        return createNode(key);
    }

    // If the key is less than the root's key, recursively insert it into the left subtree
    if (key < root->key) {
        root->left = insertNode(root->left, key);
    }
    // If the key is greater than or equal to the root's key, recursively insert it into the right subtree
    else {
        root->right = insertNode(root->right, key);
    }

    return root;
}

// Define a function to search for a node with a given key in the binary search tree
Node* searchNode(Node* root, int key) {
    // If the root is null or the key is found at the root, return the root
    if (root == NULL || root->key == key) {
        return root;
    }

    // If the key is less than the root's key, recursively search for it in the left subtree
    if (key < root->key) {
        return searchNode(root->left, key);
    }
    // If the key is greater than the root's key, recursively search for it in the right subtree
    else {
        return searchNode(root->right, key);
    }
}

// Define a function to perform an inorder traversal of the binary search tree
void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}

int main() {
    // Create an empty binary search tree
    Node* root = NULL;

    // Insert some nodes into the binary search tree
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Search for a node with a given key in the binary search tree
    Node* node = searchNode(root, 60);
    if (node != NULL) {
        cout << "Found node with key " << node->key << endl;
    } else {
        cout << "Node not found" << endl;
    }

    // Perform an inorder traversal of the binary search tree
    inorderTraversal(root); // Output: 20 30 40 50 60 70 80

    return 0;
}
```

## Binary Search Tree (searching for string values) - C++ Implementation

```
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string key;
    Node* left;
    Node* right;
};

Node* createNode(string key) {
    Node* node = new Node;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insertNode(Node* root, string key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insertNode(root->left, key);
    } else {
        root->right = insertNode(root->right, key);
    }

    return root;
}

Node* searchNode(Node* root, string key) {
    if (root == NULL || root->key == key) {
        return root;
    }

    if (key < root->key) {
        return searchNode(root->left, key);
    } else {
        return searchNode(root->right, key);
    }
}

void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = NULL;

    root = insertNode(root, "banana");
    insertNode(root, "apple");
    insertNode(root, "orange");
    insertNode(root, "grape");
    insertNode(root, "pineapple");

    Node* node = searchNode(root, "orange1");
    if (node != NULL) {
        cout << "Found node with key " << node->key << endl;
    } else {
        cout << "Node not found" << endl;
    }

    inorderTraversal(root); // Output: apple banana grape orange pineapple

    return 0;
}

``` 