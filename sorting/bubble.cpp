#include <iostream>
#define n 5
using namespace std;

class bubbleSort
{
  private:
  int a[n]={8, 6, 4, 2, 3};
  public:
  void sort()
  {
      int temp;
      for(int i=0; i<n-1; i++)
      {
          for(int j=0; j<n-1; j++)
          {
              if(a[j]>a[j+1])
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;

              }
          }
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
    bubbleSort i;
    cout<<"BEFORE SORTING\n"<<endl;
    i.display();
    cout<<"\nAFTER SORTING\n"<<endl;
    i.sort();
    i.display();
}