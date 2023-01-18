#include <stdio.h>
#include <stdlib.h>
struct Poly
{
  int coef;
  int expo;
  struct Poly *next;
};
struct Poly *p1, *p2, *p3;
//p1=4x^14 +5x^9 +1
//p2=7x^14 - 5x^10 +12x^7

void addPolynomials(p1, p2)
{
  struct Poly *temp1, temp2;
  temp1=p1;
  temp2=p2;
  while(temp1->next!=NULL && temp2->next!=NULL)
  {
      if(temp1->expo>temp2->expo)
  }
}
int main(void)
{
    
}