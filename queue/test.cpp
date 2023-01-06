#include <iostream>
using namespace std;

class Queue{
  private:
    int queue[5], n=5, front=0, rear = -1;
  public:
    void Enqueue(int x){
        if(rear>=4){
            cout<<"QUEUE IS FULL"<<endl;
        }else{
            rear++;
            queue[rear]=x;
        }
    }
    void Dequeue(){
        if(front>rear){
            cout<<"QUEUE IS EMPTY"<<endl;

        }else{

            cout<<"Item removed: "<<queue[front]<<endl;
            front++;
        }
    }
    void display(){

            for(int i=front; i<=rear; i++){
                cout<<queue[i]<<" "<<endl;
            }
        }


};
int main(void){
    Queue q;
    q.Enqueue(78);
    q.Enqueue(79);
    q.Enqueue(14);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.display();
}