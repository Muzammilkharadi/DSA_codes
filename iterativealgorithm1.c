// Node definition for binary tree
struct Node
{
    int data;
    node* left;
    node* right;
};

// Iterative inorder traversal of binary tree
void inorderTraversal(Node* root)
{
    stack<Node*> s;
    Node* current = root;

    while (current != NULL || !s.empty()) {
        // Traverse left subtree
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }

        // Visit the top of the stack
        current = s.top();
        s.pop();
        cout << current->data << " ";

        // Traverse right subtree
        current = current->right;
    }
}
