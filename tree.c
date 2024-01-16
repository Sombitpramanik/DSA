#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *right;
    struct tree *left;
};
struct tree *create(int value)
{
    struct tree *NewTree = (struct tree *)malloc(sizeof(struct tree));
    if (NewTree == NULL)
    {
        fprintf(stderr, "Memory Allocation Failed\n");
        exit(EXIT_FAILURE);
    }
    NewTree->data = value;
    NewTree->left = NULL;
    NewTree->right = NULL;
    return NewTree;
}
struct tree *insert(struct tree *root, int value)
{
    if (root == NULL)
    {
        return create(value);
    }

    if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    else if (value < root->data)
    {
        root->left = insert(root->left, value);
    }

    return root;
}
void inOrderTraversal(struct tree *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main()
{
    struct tree *BTree = NULL;
    int values[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(values) / sizeof(values[0]); ++i) {
        BTree = insert(BTree, values[i]);
    }
    printf("In-order traversal: ");
    inOrderTraversal(BTree);
    printf("\n");

    free(BTree);
    
    return 0;
}