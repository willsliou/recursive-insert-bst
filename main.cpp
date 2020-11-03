#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
};

Node* insert(Node *p, int key) {
    Node *t;
    // Node is null
    if (p == nullptr) {
        // Create a new node
        t = new Node;
        // Put in new data into node and set right/left children to NULL
        t->data = key;
        t->left = t->right = nullptr;
    }
    
    if (key < p->data) {
        // create a new node then assign to left child of previous node (in call stack)
        p->left = insert(p->left, key); // p->left will give null during our recursive call, which will default to the base case and create a new node.
    } 
    else if (key > p->data) {
        p->right = insert(p->right, key); 
    }
    // return back our address to our node
    return p;
}

int main() {
    // Create root node
    Node *root = nullptr;
    // set root equal to the base case of insert function (no nodes exist)
    // Set root to be 30
    root = insert(root, 30);
    insert(root, 20);
}