#include <stdio.h>

int main()
{
    int year;
    printf("\nenter the year");
    scanf("\n%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
        printf("\nyes",year);
    else
        printf("\nno",year);

    return 0;
}
