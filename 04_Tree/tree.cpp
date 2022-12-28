#include <iostream>

struct Node{
    int data;
    struct Node *left, *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void inOrder(struct Node *n)
{
    if(n==NULL) { return; }
    inOrder(n->left);
    std::cout << n->data << "->";
    inOrder(n->right);
}

void preOrder(struct Node *n)
{
    if(n==NULL) { return; }
    std::cout << n->data << "->";
    preOrder(n->left);
    preOrder(n->right);
}

void postOrder(struct Node *n)
{
    if(n==NULL) { return; }
    postOrder(n->left);
    postOrder(n->right);
    std::cout << n->data << "->";
}

int main()
{
    struct Node *root = new Node(8);
    root->left = new Node(10);
    root->right= new Node(3);

    root->right->left = new Node(17);
    root->left->left   = new Node(4);
    root->left->right  = new Node(2);

    std::cout << "InOrder Traversal " << std::endl;
    inOrder(root);

    std::cout << "PreOrder Traversal " << std::endl;
    preOrder(root);

    std::cout << "PostOrder Traversal " << std::endl;
    postOrder(root);
}