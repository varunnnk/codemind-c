#include<stdio.h>
int main()
{
    int year,lastTwoDigits;
    printf("");
    scanf("%d",&year);
    
    //extract the last teo digits
    lastTwoDigits=year % 100;
    printf("%02d
",lastTwoDigits);
    return 0;
}