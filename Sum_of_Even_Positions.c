#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a+=arr[i];
        }
    }
    printf("%d",a);
}