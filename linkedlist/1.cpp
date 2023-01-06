#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node * next;
};
struct Node *head;
void frontInsert(struct Node *ptr, int item)
{
    // struct Node *ptr;
    // int item;
    ptr = (struct Node *) malloc(sizeof(struct Node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }

}
void backInsert(struct Node *ptr, int item){
    ptr = (struct Node *) malloc(sizeof(struct Node *));
    if(head ==NULL){
        printf("\nUNDERFLOW!\n");
    }else{
        
    }
}
void display(struct Node *ptr){
    struct Node * head;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
}
void display()
{
    struct Node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}
void firstDelete()
{
    struct Node * ptr;
    if(head==NULL){
        printf("\nNOTHING TO DELETE!\n");
    }
    else{
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\nFIRST NODE DELETED!\n");
    }
}

int main(void)
{
    frontInsert(head, 78);
    frontInsert(head, 88);
    frontInsert(head, 47);
    display();
    firstDelete();
    display();
    firstDelete();
    display();
}
