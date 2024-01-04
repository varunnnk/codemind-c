#include<stdio.h>
int main()
{
    int english,maths,physics,chemistry,computer_science;
    scanf("%d%d%d%d%d",&english,&maths,&physics,&chemistry,&computer_science);
    
    if(english> 34 && maths >34 && physics >34&& chemistry>34 && computer_science>34)
    printf("PASSED");
    else
    printf("FAILED");
    
    return 0;
}