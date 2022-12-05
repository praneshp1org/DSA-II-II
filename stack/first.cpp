#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> thisIsStack;
    thisIsStack.push(1);
    thisIsStack.push(2);
    thisIsStack.push(3);
    thisIsStack.push(4);
    thisIsStack.push(5);
    // thisIsStack.pop();

    while(!thisIsStack.empty()){
        cout<<thisIsStack.top()<<" ";
        thisIsStack.pop();

    }
}