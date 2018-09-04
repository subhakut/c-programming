#include <stdio.h>
int main()
{
    int n, rever= 0, rem, o;
    scanf("%d", &n);

    o= n;
    while( n!=0 )
    {
        rem= n%10;
        rever= rever*10 + rem;
        n /= 10;
    }

   
    if (o== rever)
        printf("yes");
    else
        printf( "no");
    
    return 0;
}
