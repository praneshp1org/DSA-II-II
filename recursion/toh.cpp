#include <stdio.h>
void towers(int, char, char, char);
/*

1
2
3
*/
int main(void){
    towers(3, 'A', 'C', 'B');
}
void towers(int n, char fromPeg, char toPeg, char auxPeg){
    int i=0;
    if(n==1){
        printf("%s%c%s%c\n", "moved disk1 from peg ", fromPeg, " to peg ", toPeg);

        return ;

    }
    towers(n-1, fromPeg, auxPeg, toPeg);

    printf("%s%d%s%c%s%c\n", "moved disk ", n," fromPeg " ,fromPeg,   " to peg ", toPeg);
    towers(n-1, auxPeg, toPeg, fromPeg);


}
