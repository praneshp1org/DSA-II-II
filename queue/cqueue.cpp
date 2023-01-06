#include <iostream>
#define n 5
using namespace std;

class CQueue
{
  private:
  int queue[n], front=-1, rear=-1;
  public:
  void Enqueue(int value){
      if(front == (rear+1)%n)
      {
          cout<<"QUEUE Full!"<<endl;
      }else{
        queue[rear]=value;
        rear = (rear+1)%n;
      }
  }
  void Display(){
    if(front ==-1){
      cout<<"QUEUE IS EMPTY"<<endl;
    }
    if(front<=rear){
      while(front<=rear){
        cout<<queue[front]<<" ";
        front++;
      }
    }else{
      while(front<=n-1){
        cout<<queue[front]<<" ";
        front++;
      }
      front =0;
      while(front<=rear){
        cout<<queue[front]<<" ";
        front++;
      }

    }
    cout<<endl;
  }
};
int main(void){
  CQueue q;
  q.Enqueue(78);
  q.Display();
}