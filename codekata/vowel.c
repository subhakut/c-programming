/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
    char ch;
    scanf("\n%c",&ch);
    int islower,isupper;
    islower=(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    isupper=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch =='U');
    if(islower || isupper)
        printf("vowels");
     else
        printf("consonant");
    return 0;
}
