#include<stdio.h>
int main()
{
    float basicSalary,hra,da,pf,grossSalary;
    
    //Reading Basic Salary,HRA and DA

    scanf("%f",&basicSalary);
    scanf("%f",&hra);
    scanf("%f",&da);
    //calculating PF and Gross Salary 
    pf =0.12*basicSalary;
    grossSalary=basicSalary+hra+da+pf;
    
    //Printing PF and Gross Salary
    printf("%.2f
",pf);
    printf("%.2f
",grossSalary);
    return 0;
}