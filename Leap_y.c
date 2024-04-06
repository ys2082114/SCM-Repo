#include <stdio.h>
int main()
{
    int y;
    printf("Enter : ");
    scanf("%d",&y);
    if (y%4==0 && y%100!=0 || y%400==0)
    {
        printf("Leap y");
    }
    // else if (y%400==0)
    // {
    //     printf("Leap y");
    // }
    else
    {
        printf("Normal y");
    }
    return 0;
}