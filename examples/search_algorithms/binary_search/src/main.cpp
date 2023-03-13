#include <iostream>

// Node definition
struct Node
{
    int key;
    Node * left;
    Node* right;
};

// Creating anode
Node* creatNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}


Node* insertNode(Node* root, int key)
{

    if (root == NULL)
    {
        return creatNode(key);
    }

    if (key < root->key)
    {
        root->left = insertNode(root->left, key);
    }
    else
    {
        root ->right = insertNode(root->right, key);
    }

    return root;
}

Node* searchNode(Node* root, int key)
{
    if (root == NULL || root->key == key)
    {
        return root;
    }

    if (key < root->key)
    {
        return searchNode(root->left ,key);
    }
    else
    {
        return searchNode(root->right, key);
    }
}

void inorderTraversal(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->key << "   ";
    // inorderTraversal(root->right);

}

int main(int argc, char** argv)
{
    Node* root = NULL;

    root = insertNode(root ,50);

    insertNode(root, 20);
    insertNode(root, 30);
    insertNode(root, 40);
    insertNode(root, 60);
    insertNode(root, 90);
    insertNode(root, 80);
    insertNode(root, -25);

    Node* search_result = searchNode(root, 80);

    std::cout << "Results: " << search_result->key << std::endl;

    inorderTraversal(root);

    return 0;
}