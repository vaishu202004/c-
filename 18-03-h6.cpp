#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insertRecursive(Node* root, int val) {
        if (root == nullptr)
            return new Node(val);

        if (val < root->data)
            root->left = insertRecursive(root->left, val);
        else if (val > root->data)
            root->right = insertRecursive(root->right, val);

        return root;
    }

    Node* searchRecursive(Node* root, int val) {
        if (root == nullptr || root->data == val)
            return root;

        if (val < root->data)
            return searchRecursive(root->left, val);
        else
            return searchRecursive(root->right, val);
    }

    Node* findMin(Node* root) {
        if (root == nullptr)
            return nullptr;
        while (root->left != nullptr)
            root = root->left;
        return root;
    }

    Node* deleteNode(Node* root, int val) {
        if (root == nullptr)
            return root;

        if (val < root->data)
            root->left = deleteNode(root->left, val);
        else if (val > root->data)
            root->right = deleteNode(root->right, val);
        else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

public:
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insertRecursive(root, val);
    }

    bool search(int val) {
        return searchRecursive(root, val) != nullptr;
    }

    void remove(int val) {
        root = deleteNode(root, val);
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder traversal of the BST: ";
    // Implementing inorder traversal to print elements in sorted order
    // Left -> Root -> Right
    std::function<void(Node*)> inorder = [&](Node* node) {
        if (node) {
            inorder(node->left);
            std::cout << node->data << " ";
            inorder(node->right);
        }
    };
    inorder(tree.getRoot());
    std::cout << std::endl;

    int toSearch = 70;
    std::cout << "Is " << toSearch << " present in the BST? " << (tree.search(toSearch) ? "Yes" : "No") << std::endl;

    tree.remove(30);
    std::cout << "After removing 30, Inorder traversal of the BST: ";
    inorder(tree.getRoot());
    std::cout << std::endl;

    return 0;
}

