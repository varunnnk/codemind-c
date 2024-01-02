#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'V':
        case'v':
        printf("Voilet");
        break;
        case'I':
        case'i':
        printf("Indigo");
        break;
        case'B':
        case'b':
        printf("Blue");
        break;
        case'G':
        case'g':
        printf("Green");
        break;
        case'Y':
        case'y':
        printf("Yellow");
        break;
        case'O':
        case'o':
        printf("Orange");
        break;
        case'R':
        case'r':
        break;
        default:
        printf("-1");
    }
    return 0;
}