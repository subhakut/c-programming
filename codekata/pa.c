#include <stdio.h>
int main()
{
    int n,rever= 0,rem,a;
    scanf("%d",&n);
    a= n;
    while( n!=0 )
    {
        rem= n%10;
        rever= rever*10 + rem;
        n /= 10;
    }

    if (a== rever)
        printf("yes");
    else
        printf( "no");
    
    return 0;
}
