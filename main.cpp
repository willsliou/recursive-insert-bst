#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
};

Node* insert(Node *p, int key) {
    Node *t;
    // No nodes exist
    if (p == nullptr) {
        // Create a new node
        t = new Node;
        // Put in new data into node and set right/left children to NULL
        t->data = key;
        t->left = t->right = nullptr;
        
    }
}
int main() {
    // Create root node
    Node *root = nullptr;
    // set root equal to the base case of insert function (no nodes exist)
    // Set root to be 30
    root = insert(root, 30);
    insert(root, 20);
}