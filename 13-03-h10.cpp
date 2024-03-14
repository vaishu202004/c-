#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class BinarySearchTree {
private:
    Node* root;

    Node* insertRecursive(Node* root, int data) {
        if (root == NULL)
            return new Node(data);
        
        if (data < root->data)
            root->left = insertRecursive(root->left, data);
        else if (data > root->data)
            root->right = insertRecursive(root->right, data);
        
        return root;
    }

    void inOrderTraversal(Node* root) {
        if (root == NULL)
            return;

        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }

    Node* findMinNode(Node* node) {
        while (node->left != NULL)
            node = node->left;
        return node;
    }

    Node* deleteNode(Node* root, int key) {
        if (root == NULL)
            return root;

        if (key < root->data)
            root->left = deleteNode(root->left, key);
        else if (key > root->data)
            root->right = deleteNode(root->right, key);
        else {
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = findMinNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

public:
    BinarySearchTree() : root(NULL) {}

    void insert(int data) {
        root = insertRecursive(root, data);
    }

    void remove(int key) {
        root = deleteNode(root, key);
    }

    void displayInOrder() {
        std::cout << "In-order Traversal: ";
        inOrderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Binary Search Tree after insertion:" << std::endl;
    bst.displayInOrder();

    bst.remove(20);
    bst.remove(30);

    std::cout << "Binary Search Tree after deletion:" << std::endl;
    bst.displayInOrder();

    return 0;
}

