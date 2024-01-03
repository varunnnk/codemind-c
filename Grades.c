#include<stdio.h>
int main()
{
    int phy, che, bio, math, cs, total;
    float per;
    scanf("%d %d %d %d %d", &phy, &che, &bio, &math, &cs);
    total = phy + che + bio + math + cs;
    per = ((float)total / 500) * 100;

    if (per >= 90) {
        printf("Grade A");
    } else if (per >= 80) {
        printf("Grade B");
    } else if (per >= 70) {
        printf("Grade C");
    } else if (per >= 60) {
        printf("Grade D");  // Fixed the typo here
    } else if (per >= 40) {
        printf("Grade E");
    } else {
        printf("Grade F");
    }

    return 0;  // Added a return statement
}
