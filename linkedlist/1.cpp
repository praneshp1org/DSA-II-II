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
void backInsert(struct Node *ptr, int item)
{
    struct Node *temp;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted from back");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted from back");

        }
    }
}
void randomInsert(int value, int pos)
{
    int i;
    struct Node *ptr, *temp;
    ptr = (struct Node *) malloc (sizeof(struct Node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = value;
        temp=head;
        for(i=0;i<pos;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }

        }
        ptr ->next = temp ->next;
        temp ->next = ptr;
        printf("\nNode inserted");
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
void backDelete()
{
    struct Node *ptr,*ptr1;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}
void randomDelete(int pos)
{
    struct Node *ptr,*ptr1;
    int i;

    ptr=head;
    for(i=0;i<pos;i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if(ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1 ->next = ptr ->next;
    free(ptr);
    printf("\nDeleted node %d ",pos+1);
}

int main(void)
{
    frontInsert(head, 78);
    display();
    frontInsert(head, 88);
    display();
    // frontInsert(head, 47);
    // display();
    // firstDelete();
    // display();
    // backInsert(head, 55);
    // backInsert(head, 25);
    // backInsert(head, 69);
    // display();
    // randomInsert(14, 3);
    // display();
    // backDelete();
    // display();
    // randomDelete(3);
    // display();

}
