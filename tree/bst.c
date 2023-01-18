#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *root=NULL, *temp, *newnode;
void display() {
    //Node current will point to head
    struct tree *currentR = root;
    struct tree *currentL = root;
    if(root == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Right Nodes: \n");
    while(currentR != NULL) {
        //Prints each node by incrementing pointer.
        printf("%d \n", currentR->data);
        currentR = currentR->right;
    }
    printf("Left Nodes: \n");
    while(currentL != NULL) {
        //Prints each node by incrementing pointer.
        printf("%d \n", currentL->data);
        currentL = currentL->left;
    }
}
void createBST(int m)
{
    int flag=0;
    newnode = (struct tree*)malloc(sizeof(struct tree));
    newnode->data=m;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;

    }else
    {
       flag=1;
       temp=root;
       while(flag!=0)
       {
           if(newnode->data<temp->data)
           {
               if(temp->left==NULL)
               {
                   temp->left=newnode;
                   flag=0;
               }else{
               temp=temp->left;
               }
           }else
           {
               if(temp->right==NULL)
               {
                   temp->right=newnode;
                   flag=0;
               }else
               {
                   temp=temp->right;
               }
           }

       }
    }
}
void preorderTraversal(struct tree *p)
{
    //printf("PREORDER TRAVERSAL \n");
    //root, left, right
 if(p!=NULL)
 {
     printf("%d \n", p->data);
     preorderTraversal(p->left);
     preorderTraversal(p->right);
 }
}
void inorderTraversal(struct tree *p)
{
    // left, root, right

    if(p!=NULL)
    {
        inorderTraversal(p->left);
        printf("%d \n", p->data);
        inorderTraversal(p->right);
    }
}
void postorderTraversal(struct tree *p)
{
    // left, right, root

    if(p!=NULL)
    {
        inorderTraversal(p->left);
        inorderTraversal(p->right);
        printf("%d \n", p->data);
    }
}
int main(void)
{
    createBST(10);
    createBST(5);
    createBST(20);
    createBST(6);
    createBST(30);
    createBST(25);
    createBST(40);
    createBST(23);
    createBST(26);
    createBST(24);
    printf("PREORDER TRAVERSAL \n");
    preorderTraversal(root);
    printf("INORDER TRAVERSAL \n");
    inorderTraversal(root);
    printf("POSTORDER TRAVERSAL \n");
    postorderTraversal(root);
    display();
}