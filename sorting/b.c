#include <stdio.h>


void bubbleSort()
{
    int a[]={7, 2, 14, 4, 8};
    int i, j;
    int temp;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Displaying\n");
    for(i=0; i<5; i++){
        printf("%d\n", a[i]);
    }
}
int main(void)
{
    bubbleSort();
}