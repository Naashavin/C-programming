#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int val;
    struct Node* left;
    struct Node* right;
} Node;

static Node* new_node(int v) 
{
    Node* n = (Node*)malloc(sizeof(Node));
    if (!n) { perror("malloc"); 
	exit(EXIT_FAILURE); 
	}
    n->val = v;
    n->left = n->right = NULL;
    return n;
}

void preorder(Node* root) 
{
    if (root) 
	{
        printf("%d ", root->val);
        preorder(root->left);
        preorder(root->right);
    }
}


void inorder(Node* root) 
  {
    if (root) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->val);
    }
}

void free_tree(Node* root) {
    if (!root) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int main(void) {

    Node* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);
    root->right->right = new_node(6);

    printf("Pre-order traversal:\n");
    preorder(root);
    printf("\n");

    printf("In-order traversal:\n");
    inorder(root);
    printf("\n");

    printf("Post-order traversal:\n");
    postorder(root);
    printf("\n");

    free_tree(root);
    return 0;
}
