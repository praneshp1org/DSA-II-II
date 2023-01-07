#include <iostream>
#define SIZE 50
using namespace std;


class staticList
{
  private:
  int *arr, cur_pos, size;
  int ui, li;
  public:
  staticList(){
      arr = new int[SIZE];
      cur_pos=-1;
      ui=SIZE-1;
      li=0;

  }
  void insertAtLast(int item){

      if(ui==SIZE-1){
          cout<<"FULL"<<endl;
      }else{
          ui++;
          arr[ui]=item;
      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" \n";
      }
  }
  void insertAtFirst(int item){
      int ui=3, li=0;

      if(ui==4){
          cout<<"FULL"<<endl;
      }else{
          int k=ui;
          while(k>=ui){
              arr[k+1]=arr[k];
              k--;
          }
          arr[li]=item;
          ui++;
      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" ";
      }
  }
  void insert(int item, int pos){
      

      if(size==SIZE-1){
          cout<<"FULL"<<endl;
      }else{
          int k=ui;
          while(k>=pos){
              arr[k+1]=arr[k];
              k--;
          }
          arr[pos]=item;
          ui++;
      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" ";
      }
  }
    void delete1FromLast(){
      int ui=3, li=0;

      if(ui==4){
          cout<<"FULL"<<endl;
      }else{
          arr[ui]=0;
          ui--;
      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" ";
      }
  }
      void deleteFromLast(){
      int ui=3, li=0;

      if(ui==4){
          cout<<"FULL"<<endl;
      }else{
          arr[ui]=0;
          ui--;
      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" ";
      }
  }
    void deleteFromFirst(){
      int ui=3, li=0;

      if(ui==4){
          cout<<"FULL"<<endl;
      }else{
          int k=li;
          while(k<ui){
            arr[k+1]=arr[k];
          k++;
          }
          arr[ui]=0;
          ui--;


      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" ";
      }
  }
  void deleteItem(int item){
      int ui=3, li=0, flag=0;
      int k=li;
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
          arr[ui]=0;
          ui--;
      }else{
          cout<<"THIS ELEMENT IS NOT IN THE LIST"<<endl;
      }
      for(int i=0; i<5; i++){
          cout<<arr[i]<<" "<<endl;
      }
  }

};
int main(void){
    staticList s;
    s.insertAtFirst(77);
    s.insertAtLast(55);
    // s.insert(9, 2);
    // s.deleteItem(2);
}