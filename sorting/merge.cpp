#include <stdio.h>
#define MAX 50
void display(int a[MAX], int len)
{
  int i;
  for(i=0; i<len; i++)
  {
    printf("\t %d", a[i]);
  }
}
void merge(int a[MAX], int left, int mid, int right)
{
  int i=0, k, p, temp[MAX];
  k=left, p=mid+1;
  while(left<=mid&&p<=right)
  {
    if(a[left]<a[p])
    {
      temp[i++]=a[left++];

    }else
    {
      temp[i++]=a[p++];
    }
  }
  while(left<=mid)
  {
    temp[i++]=a[p++];
  }
  while(p<=right)
  {
    temp[i++]=a[p++];
  }
  for(i=k; i<=right; i++)
  {
    a[i]=temp[i-k];
  }
}
void mergeSort(int a[MAX], int left, int right)
{
  int mid;
  if(left<right)
  {
    mid = (left+right)/2;
    mergeSort(a, left, mid);
    mergeSort(a, mid+1, right);
    merge(a, left, mid, right);
  }
}

int main(void)
{
  int len=7;
  int a[len]={21, 32, 4, 54, 23, 10, 8};
  printf("Before sorting\n");
  display(a, len);

  printf("After sorting\n");
  mergeSort(a, 0, len-1);
  display(a, len);

}