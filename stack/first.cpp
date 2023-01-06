#include <iostream>
using namespace std;

class Stack{
    private:
    int stack[10], n=10, top=-1;
    public:
    void push(int val){
        if(top>=n-1){
            cout<<"Stack Overflow!"<<endl;
        }else{
            top++;
            stack[top]=val;
        }
    }
    void pop(){
        if(top<=-1){
            cout<<"Stack Underflow!"<<endl;
        }else{
            cout<<"Popped element of stack is: "<<stack[top]<<endl;
            top--;
        }
    }
    void display(){
        if(top>=0){
            cout<<"Stack elements: "<<endl;
            for(int i=top; i>=0; i--){
                cout<<stack[i]<<endl;
            }
        }else{
            cout<<"STack is empty!"<<endl;
        }
    }
};

int main(void){
    cout<<"Stack: "<<endl;
    Stack s;
    s.display();
    s.push(10);
    s.display();
    s.push(11);
    s.push(12);
    s.display();
    s.pop();
    s.display();
}