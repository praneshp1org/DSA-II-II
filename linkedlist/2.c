#include <stdio.h>
#include <stdlib.h>
struct node1
{
  int data;
  struct node1 * next;
};
struct node1 * head;
void fInsert(int value)
{
    struct node1 * item;
    item  = (struct node1 *) malloc(sizeof(struct node1*));
    if(head==NULL)
    {
        item->next=NULL;
        item->data = value;
        head=item;
    }else
    {
        item->next=head;
        item->data=value;
        
        head=item;
    }
}
void display()
{
    struct node1 * ptr;
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
int main(void)
{
    fInsert(70);
    display();
    fInsert(88);
    display();
}