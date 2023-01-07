#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define MAX 50
using namespace std;


class staticList
{
  private:
  int *arr, ui, li, k;
  public:
  staticList(){
      ui = 0;
      li=0;
      arr = new int[MAX];
  }
  void display(){
      if(ui==li){
          cout<<"THIS IS EMPTY!"<<endl;
      }else{
          cout<<"DISPLAYING"<<endl;
        for(int i=0; i<ui; i++){
          cout<<arr[i]<<endl;
      }
      }

  }
  void insert(int item, int pos)
  {
      if(ui==MAX-1){
          cout<<"ARRAY IS FULL\n"<<endl;
      }else
      {
          k=ui;
          while(k>=pos){
              arr[k+1]=arr[k];
              k--;
          }
          arr[pos]=item;
          ui++;
      }

  }
   void deleteItem(int item)
  {
      k=li;
      int flag;
      while(k<=ui){
          if(arr[k]==item){
              flag=1;
              break;
          }
          k++;
      }
      if(flag==1){
          while(k<ui){
              arr[k]=arr[k+1];
              k++;
          }
          arr[ui]=NULL;
          ui--;
      }else
      {
          cout<<"Invalid!"<<endl;
      }
  }
};
int main(void){
    staticList s;
    s.insert(12, 0);
    s.insert(82, 1);
    s.insert(78, 2);
    s.display();
    s.deleteItem(82);
    s.display();
}