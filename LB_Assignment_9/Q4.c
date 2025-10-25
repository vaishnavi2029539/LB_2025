//Accept temperature in fahrenheit and convert it into celcius (1 celcius = (Fahrenheit - 32) * (5/9))
//input: 10
//output : -12.2222 (10-32)*(5/9)
#include<stdio.h>
double FartoCel(float fTemp)
{
    float celcius = (fTemp - 32) * (5.0/9.0);
    return celcius;
}
int main()
{
    float fVal = 0.0, celsius = 0.0;
    printf("Enter temperature in fahrenheit :");
    scanf("%f",&fVal);
    celsius = FartoCel(fVal);
    printf("Fahrenheit converted in celcius is :%.4f",celsius);
    return 0; 
}