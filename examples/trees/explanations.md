## What is a tree?
In C++, a tree can be represented using a class or struct that has a pointer to its left and right subtrees (which can themselves be trees). Here is an example implementation of a binary tree node in C++:

```
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
```

This defines a TreeNode struct with an integer value (val) and two pointers to its left and right subtrees (left and right). The constructor initializes these pointers to NULL.

To create a binary tree, you can create a TreeNode for each node and set its left and right pointers to the appropriate subtrees. For example, here's how you could create a binary tree with root value 1, left subtree with root value 2, and right subtree with root value 3:

```
TreeNode* root = new TreeNode(1);
root->left = new TreeNode(2);
root->right = new TreeNode(3);

```

Note that this creates the nodes on the heap using new, so you'll need to manually deallocate them later with delete. Also, this is just a simple example - in practice, you would typically build a tree from input data or use recursive functions to create the tree structure.

## Example:
This program reads in a series of integers and builds a binary search tree from them. The insert function recursively inserts each value into the appropriate place in the tree, and the inorder function performs an inorder traversal of the tree to print out its values in sorted order.

```
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void insert(TreeNode*& root, int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
        return;
    }
    if (val < root->val) {
        insert(root->left, val);
    }
    else {
        insert(root->right, val);
    }
}

void inorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    int n;
    cin >> n;
    TreeNode* root = nullptr;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insert(root, val);
    }
    inorder(root);
    return 0;
}

```

## Breadth-first tree traversal
Breadth-first tree traversal is an algorithm that visits all the nodes of a tree level by level, starting from the root node. It is also called breadth-first search (BFS) algorithm for trees.

Here's how the breadth-first tree traversal algorithm works:

* Create a queue and add the root node to the queue.
* While the queue is not empty, Dequeue the next node from the front of the queue, Visit the node, Enqueue all the children of the dequeued node (if any) to the back of the queue.
* Continue until the queue is empty.

The key data structure used in this algorithm is a queue. The queue is used to keep track of the nodes that are yet to be visited. By using a queue, the algorithm ensures that nodes are visited in the order in which they were added to the queue.

```
#include <iostream>
#include <queue>

using namespace std;

// Define a node structure for the tree
struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to perform breadth-first traversal of the tree
void breadth_first_traversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << curr->value << " ";

        if (curr->left != nullptr) {
            q.push(curr->left);
        }

        if (curr->right != nullptr) {
            q.push(curr->right);
        }
    }
}

// Example usage
int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Perform breadth-first traversal
    breadth_first_traversal(root);

    return 0;
}
```

## Depth-first search (DFS)
Depth-first search (DFS) algorithm is a recursive algorithm used to traverse a tree or graph. It explores as far as possible along each branch before backtracking.

Here's how the depth-first search algorithm works:

* Starting from the root node, visit the node.
* For each unvisited neighbor of the current node, recursively visit that node.
* Repeat step 2 until all nodes have been visited.

The key data structure used in this algorithm is a stack. The stack is used to keep track of the nodes that are yet to be visited. By using a stack, the algorithm ensures that the nodes are visited in depth-first order.

```
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Define a node structure for the graph
struct Node {
    int value;
    vector<Node*> neighbors;

    Node(int val) : value(val) {}
};

// Function to perform depth-first search of the graph
void depth_first_search(Node* start) {
    if (start == nullptr) {
        return;
    }

    stack<Node*> s;
    s.push(start);

    while (!s.empty()) {
        Node* curr = s.top();
        s.pop();

        cout << curr->value << " ";

        for (Node* neighbor : curr->neighbors) {
            if (neighbor != nullptr) {
                s.push(neighbor);
            }
        }
    }
}

// Example usage
int main() {
    // Create a graph
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    a->neighbors.push_back(b);
    a->neighbors.push_back(d);

    b->neighbors.push_back(a);
    b->neighbors.push_back(c);
    b->neighbors.push_back(d);

    c->neighbors.push_back(b);
    c->neighbors.push_back(e);

    d->neighbors.push_back(a);
    d->neighbors.push_back(b);
    d->neighbors.push_back(e);

    e->neighbors.push_back(c);
    e->neighbors.push_back(d);

    // Perform depth-first search
    depth_first_search(a);

    return 0;
}
```