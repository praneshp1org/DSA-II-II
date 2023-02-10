#include <iostream>
#define n 5
using namespace std;

class insertionSort
{
  private:
  int a[n]={8, 6, 4, 2, 3};
  public:
  void sort()
  {
      for(int j=1; j<n-1; j++)
      {
          int key=a[j];
          int i=j-1;
          while(i>=0 && a[i]>key)
          {
              a[i+1]=a[i];
              i--;

          }
          a[i+1]=key;
      }
  }
  void display()
  {
      for(int i=0; i<n; i++)
      {
          cout<<a[i]<<" ";
      }
  }
};
int main(void)
{
    insertionSort i;
    cout<<"BEFORE SORTING\n"<<endl;
    i.display();
    cout<<"\nAFTER SORTING\n"<<endl;
    i.sort();
    i.display();
}