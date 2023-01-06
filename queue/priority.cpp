#include <iostream>
#include <queue>

using namespace std;

int main(void){
    priority_queue <int> q;
    q.push(10);
    q.push(78);
    q.push(19);
    q.push(30);
    q.push(74);
    cout<<q.top()<<endl;
}