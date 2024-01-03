#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    scanf("%c",&x); // read a single character
    // Convert x to lowercase for case-insenstive comparison
    x=tolower(x);
    if(x == 'a'|| x =='e' || x == 'i' || x =='o' || x == 'u'){
        printf("VOWEL
");
    }
    else{
        printf("CONSONANT
");
    }
}