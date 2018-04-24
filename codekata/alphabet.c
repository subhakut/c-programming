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
    if(ch>='a' && ch<='z' || ch>= 'A' && ch<='Z' )
        printf("Alphabet");
     else
        printf("not");
    return 0;
}
