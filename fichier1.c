struct Node node_create(int data);

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