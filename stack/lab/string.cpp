#include <stdio.h>
#include <string.h>

#define max 100
class Stack{
    private:
    int top=-1, stack[max];
    public:
    void push(char x){
      if(top==max-1){
          printf("stack overflow");
      }  else {
          ++top;
          stack[top]=x;
      }

}


void pop(){

    // Pop (Removing element from stack)

      printf("%c",stack[top--]);
}

};

int main(void)
{
    Stack s;
   char str[]="Flutter is amazing";


   int len = strlen(str), i;


   for(i=0; i<len; i++)
   {
       s.push(str[i]);
   }



   for(i=0; i<len; i++){
       s.pop();
   }

}