#include <stdio.h>
#include <stdlib.h>

struct Node node_create(int data);
void node_insert(struct Node* root, struct Node* new_node);
struct Node* node_find(struct Node* root, int data);
void inorder_traversal(struct Node* root);

struct Node {
  int data;
  struct Node* left;
  struct Node* right;
};

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

struct Node node_create(int data) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
}
