#include <iostream>
#define n 5
using namespace std;

class quickSort
{
  public:
  int partition(int a[], int lower, int upper)
  {
      int left, right, pivot, temp;
      pivot=a[lower];
      left=lower;
      right=upper;
      while(left<right)
      {
          while(a[left]<pivot && left<right)
          {
              left++;
              while(a[right]>=pivot)
              {
                  right--;
              }
              if(left<right)
              {
                  temp=a[left];
                  a[left]=a[right];
                  a[right]=temp;
              }
          }
      }
      a[lower]=a[right];
      a[right]=pivot;
      return right;
  }
  void quickSortAlgo(int a[], int li, int ui)
  {
      int pat;
      if(li<ui)
      {
          pat=partition(a, li, ui);
          quickSortAlgo(a, li, pat-1);
          quickSortAlgo(a, pat+1, ui);
      }
  }
  void display(int a[])
  {
      for(int i=0; i<n; i++)
      {
          cout<<a[i]<<" ";
      }
  }
};
int main(void)
{
      int a[n]={8, 6, 4, 2, 3};
    quickSort q;
    cout<<"BEFORE SORTING\n"<<endl;
    q.display(a);
    cout<<"\nAFTER SORTING\n"<<endl;
    q.quickSortAlgo(a, 0, n-1);
    q.display(a);
}