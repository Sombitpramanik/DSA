#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
bool search(struct tree *root, int value)
{
    if (root != NULL)
    {
        if (root->data == value)
        {
            return true;
        }
        else if (value < root->data)
        {
            return search(root->left, value);
        }
        else
        {
            return search(root->right, value);
        }
    }
    else
    {
        return false;
    }
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
    int values[10];
    int key;
    printf("Enter value to be inserted in the Tree max-5: \n");
    for(int i=0;i<5;i++){
        printf("\nEnter Value No %d: ",i+1);
        if(scanf("%d",&values[i])){
            BTree = insert(BTree,values[i]);
        }else{
            printf("\nInvalid Input\n");
            break;
        }

    }
    printf("In-order traversal: ");
    inOrderTraversal(BTree);
    printf("\n");
    printf("Enter the Key you want to search : ");
    scanf("%d", &key);
    if (search(BTree, key))
    {
        printf("\nvalue : %d Found in the Tree.\n", key);
    }
    else
    {
        printf("Value Not Found in the Tree\n");
    }

    free(BTree);

    return 0;
}