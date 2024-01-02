#include<stdio.h>
#include<math.h>
int main()
{
    int days,years,weeks;
    scanf("%d",&days);
    years=int(days/365);
    weeks=int(days%365)/7;
    printf("%d
%d",years,weeks);
}