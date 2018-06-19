#include <stdio.h>

int main()
{
    int year;
    printf("\nenter the year");
    scanf("\n%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
        printf("\n%d is leapyear",year);
    else
        printf("\n%d is not leapyear",year);

    return 0;
}
