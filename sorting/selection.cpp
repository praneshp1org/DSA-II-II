#include <iostream>
#define n 7
using namespace std;
class selectionSort
{
  private:
  int a[n]={7, 69, 8, 19, 32, 21, 45};
  public:
  void sort()
  {
      for(int i=n-1; i>0; i--)
      {
          int max=a[0];
          int index=i;
          for(int j=1; j<=i; j++)
          {
              if(a[j]>max)
              {
                  max=a[j];
                  index=j;
              }
          }
          a[index]=a[i];
          a[i]=max;
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

    selectionSort s;
    cout<<"BEFORE SORTING"<<endl;
    s.display();
    s.sort();
    cout<<"\nAFTER SORTING"<<endl;
    s.display();
}