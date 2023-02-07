#include <iostream>
#define n 6
using namespace std;

class BinarySearch
{
  private:
  int a[n]={10, 20, 30, 40, 50, 60};
  public:
  void binarySearch(int key)
  {
      int start=0, loc, end=n-1, mid=int((start+end)/2);
      do
      {
          if(key<a[mid])
          {
              end=mid-1;

          }else
          {
              start=mid+1;
          }
          mid=int((start+end)/2);
      }while(start<=end && a[mid]!=key);
      if(a[mid]==key)
      {
         loc=mid;
         printf("Value %d is at index %d", a[loc], loc+1);

      }else
      {
          loc=-1;
          printf("UNSUCCESSFULL SEARCH!\n");
      }



  }
};
int main(void)
{
    BinarySearch b;
    b.binarySearch(40);
}
