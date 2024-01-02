#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x % 2!=0){
        printf("weird");
    }else if(x%2==0 && x<=5&&x>=2){
        printf("not weird");
    }else if(x%2==0 && x<=20&&x>=6){
        printf("weird");
    }else{
        printf("not weird");
    }
}