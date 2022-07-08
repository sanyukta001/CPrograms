#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
    int data;
    struct st* left;
    struct st* right;
}node;
node* createnode(int data)
{
    node* tree = (node*)malloc(sizeof(node));
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;
}
void preorder(node* root)
{
    if(root == NULL)
        return;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
void inorder(node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
int main()
{
    node* p = createnode(7);
    node* p1 = createnode(8);                    
    node* p2 = createnode(9);                        
    node* p3 = createnode(1);
    node* p4 = createnode(2);                          
    p->left = p1;                               
    p->right = p2;        
    p1->left = p3;
    p1->right = p4;
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    printf("\n");
    return 0;
}