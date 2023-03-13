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
