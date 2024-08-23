#include<stdio.h>
void main()
{
    float base_salary,gross_salary,HRA,DA,TA;

    printf("enter the base salary:");
    scanf("%f", &base_salary);

    if(base_salary <= 10000)
    {
        HRA=base_salary*0.2;
        DA=base_salary*0.8;
        TA=base_salary*0.1;
    }
    else if(base_salary<=20000)
    {
        HRA=base_salary*0.25;
        DA=base_salary*0.9;
        TA=base_salary*0.8;
    }
    else
    {
        HRA = base_salary * 0.3;
        DA = base_salary * 0.9;
        TA=base_salary*0.6;
    }   

    gross_salary = base_salary + HRA + DA +TA;
    printf("Gross Salary is: %.2f\n", gross_salary);






     

}