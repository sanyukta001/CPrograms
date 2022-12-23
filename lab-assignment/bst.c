//write a program to insert a node in a binary search tree and travere the tree 
//using pre-order, post-order and in-order traversal technique
#include<stdio.h>
#include<stdlib.h>
typedef struct st 
{
    struct st* left;
    int data;
    struct st* right;
}Node;
Node* createnode(int val)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insertbst(Node** root,int val)
{
    Node* newnode = createnode(val);
    if(*root == NULL)
        *root = newnode;
    else if(val <= (*root)->data)
       insertbst(&(*root)->left,val);
    else
       insertbst(&(*root)->right,val);
    //return root;
}
void traversein(Node* root)
{
    if(root == NULL)
        return;
    traversein(root->left);
    printf("%d ",root->data);
    traversein(root->right);
}
void traversepre(Node* root)
{
    if(root == NULL)
        return;
    printf("%d ",root->data);
    traversepre(root->left);
    traversepre(root->right);
}
void traversepost(Node* root)
{
    if(root == NULL)
        return;
    traversepost(root->left);
    traversepost(root->right);
    printf("%d ",root->data);
}
int main()
{
    Node* root = NULL;
    insertbst(&root,10);
    insertbst(&root,20);
    insertbst(&root,30);
    insertbst(&root,40);
    insertbst(&root,50);
    traversein(root);
    printf("\n");
    traversepre(root);
    printf("\n");
    traversepost(root);
    printf("\n");
    return 0;
}