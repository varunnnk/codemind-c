#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float a=0;
    for(int i=0;i<n;i++){
        a=a+arr[i];
    }
    a=a/n;
    printf("%.2f",a);
}