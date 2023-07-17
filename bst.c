#include <stdio.h>
#include <stdlib.h>

// Structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the binary search tree
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function to perform inorder traversal and write to a file
void inorderTraversal(struct Node* root, FILE* file) {
    if (root != NULL) {
        inorderTraversal(root->left, file);
        fprintf(file, "%d ", root->data);
        inorderTraversal(root->right, file);
    }
}

// Function to perform preorder traversal and write to a file
void preorderTraversal(struct Node* root, FILE* file) {
    if (root != NULL) {
        fprintf(file, "%d ", root->data);
        preorderTraversal(root->left, file);
        preorderTraversal(root->right, file);
    }
}

// Function to perform postorder traversal and write to a file
void postorderTraversal(struct Node* root, FILE* file) {
    if (root != NULL) {
        postorderTraversal(root->left, file);
        postorderTraversal(root->right, file);
        fprintf(file, "%d ", root->data);
    }
}

int main() {
    struct Node* root = NULL;

    // Open files for writing
    FILE* input_file = fopen("input.txt", "w");
    FILE* output_file = fopen("output.txt", "w");
    if (input_file == NULL || output_file == NULL) {
        printf("Failed to open file!\n");
        return 1;
    }

    // Generate and insert random numbers into the tree
    int i, num;
    for (i = 0; i < 10; i++) {
        num = rand() % 100; // Generate random number between 0 and 99
        fprintf(input_file, "%d ", num);
        root = insertNode(root, num);
    }

    // Close the input file
    fclose(input_file);

    // Perform tree traversals and write to the output file
    inorderTraversal(root, output_file);
    fprintf(output_file, "\n");
    preorderTraversal(root, output_file);
    fprintf(output_file, "\n");
    postorderTraversal(root, output_file);

    // Close the output file
    fclose(output_file);

    return 0;
}
