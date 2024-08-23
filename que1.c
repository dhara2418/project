#include<stdio.h>
void main()
{
float celcius,fahrenheit;

  printf("enter temperature in celcius" );
  scanf("%f",&celcius);
  fahrenheit=(celcius*9/5)+32;
  printf("%.2f celcius = %.2f fahrenheit",celcius,fahrenheit);


}



