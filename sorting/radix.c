#include <stdio.h>

int getMax(int a[], int n)
{
    int max=a[0], i;;
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
void radixSort(int a[], int n)
{
    int bucket[10][10], bucket_cnt[10];
    int i, j, k, r, NOP=0, divisor=1, large, pass;
    large = getMax(a, n);
    while(large>0)
    {
        NOP++;
        large = large/10;
    }
    for(pass=0; pass<NOP; pass++)
    {
        for(i=0; i<10; i++)
        {
            bucket_cnt[i]=0;
        }
        for(i=0; i<n; i++)
        {
            r=(a[i]/divisor)%10;
            bucket[r][bucket_cnt[r]]=a[i];
            bucket_cnt[r]+=1;

        }
        i=0;
        for(k=0; k<10; k++)
        {
            for(j=0; j<bucket_cnt[k]; j++)
            {
                a[i]=bucket[k][j];
                i++;
            }
        }
        divisor *=10;
        printf("After pass %d: ", pass+1);
        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);
            printf(" \n");
        }
    }


}
int main(void)
{
    int n=10;
    int a[]={64, 8, 216, 512, 27, 729, 0, 1, 343, 125};
    radixSort(a, n);

}