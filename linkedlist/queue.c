#include <stdio.h>
#include <stdlib.h>

struct queue
{
  int data;
  struct queue *next;
};
struct queue *head=NULL, *tail=NULL, *newnode, *p;

void enqueue(int item)
{
    newnode=(struct queue *)malloc(sizeof(struct queue));
    newnode->data=item;
    newnode->next=NULL;
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
    }else
    {
        tail->next=newnode;
        tail=newnode;

    }
}
void dequeue()
{
    if(head==NULL)
    {
        printf("QUEUE IS EMPTY\n");
    }else
    {
        // printf("%d\n", head->data);
        head=head->next;
    }
    printf("SUCCESSFULLY DEQUEUED!\n");
}
void display()
{

    p = head;
    if(p == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (p!=NULL)
        {
            printf("\n%d",p->data);
            p = p-> next;
        }
    }
}
int main(void)
{
    enqueue(78);
    enqueue(14);
    enqueue(63);
    enqueue(20);
    display();
    dequeue();
    display();

}