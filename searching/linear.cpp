#include <iostream>
#define n 5
using namespace std;
using namespace std::chrono;
class LinearSearch{
private:
int a[n]={10, 12, 66, 48, 89};
public:
void search(int key)
{

    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            flag=1;
            printf("Found at %d\n", i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("SEARCH UNSUCCESSFULL!\n");
    }


}

};
int main(void)
{
    LinearSearch l;
    l.search(90);
}