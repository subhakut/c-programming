#include <stdio.h>

int main ()
{
    char ch;
    scanf("\n%c",&ch);
    if(ch>='a' && ch<='z' || ch>= 'A' && ch<='Z' )
        printf("yes");
     else
        printf("no");
return 0;
}
