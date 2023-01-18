#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int data;
  struct stack *next;
};
struct stack *TOS=NULL, *newnode;

void push(int item)
{
    newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->data=item;
    newnode->next=NULL;
    if(TOS==NULL)
    {
        TOS=newnode;
    }else{
        newnode->next=TOS;
        TOS=newnode;
    }
}
void pop()
{
    if(TOS==NULL)
    {
        printf("EMPTY STACK!\n");
    }else{
        printf("%d \n", TOS->data);
        TOS=TOS->next;
    }
}
int main(void)
{
    push(74);
    push(75);
    push(986);
    push(66);
    pop();
    pop();
}