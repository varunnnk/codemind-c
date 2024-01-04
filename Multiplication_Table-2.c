#include<stdio.h>

int main()
{
    int a, b, i;

    // Input two integers
    scanf("%d %d", &a, &b);

    // Print multiplication table
    for(i = 1; i <= b; i++) {
        printf("%d x %d = %d
", a, i, a * i);
    }

    return 0; // Added return statement
}