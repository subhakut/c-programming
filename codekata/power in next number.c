#include <stdio.h>
int main()
{
    int n,b,sum=1;
    scanf("%d",&b);
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum*b;
	n=n-1;

    }
    printf("%d",sum);
    return 0;
}
