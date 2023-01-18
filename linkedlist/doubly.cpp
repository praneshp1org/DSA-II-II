#include <stdio.h>
#include <stdlib.h>

struct doubly
{
  int data;
  struct doubly *left;
  struct doubly *right;

};
struct doubly *head=NULL, *p, *temp, *newnode;

void createList(int item)
{
    newnode = (struct doubly *)malloc(sizeof(struct doubly));
    newnode->data = item;
    newnode->left=NULL;
    newnode->right=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        p=head;
        while(p->right!=NULL)
        {
            p=p->right;

        }
        p->right=newnode;
        newnode->left=p;
    }
}
void insertAtFirst(int item)
{
    newnode = (struct doubly *)malloc(sizeof(struct doubly));
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->right=head;
    head->left=newnode;
    head=newnode;
}
void deleteFirstNode()
{
    p=head;
    head=head->right;
    head->left=NULL;
    free(p);

}
void deleteLast()
{
    p=head;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    temp=p;
    p->left->right=NULL;
    free(temp);

}
void display() {
    //Node current will point to head
    struct doubly *current = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of doubly linked list: \n");
    while(current != NULL) {
        //Prints each node by incrementing pointer.
        printf("%d \n", current->data);
        current = current->right;
    }
}
void insertAt(int item, int pos)
{
    newnode = (struct doubly *)malloc(sizeof(struct doubly));
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    if(pos<=1)
    {
        newnode->right=head;
        head->left=newnode;
        head=newnode;
    }
    p=head;
    while(pos>2 && p->right!=NULL)
    {
        p=p->right;
        pos--;

    }
    newnode->left=p;
    newnode->right=p->right;
    p->right->left=newnode;
    p->right=newnode;
}
int main(void)
{
    createList(78);
    createList(30);
    createList(52);
    createList(54);
    createList(65);
    insertAtFirst(89);
    deleteFirstNode();
    deleteLast();
    insertAt(33, 3);
    display();
}

