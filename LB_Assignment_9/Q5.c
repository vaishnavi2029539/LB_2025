//accept area in square feet and convert it into square meter (1 square feet = 0.0929 square meter) 
//input 5
//output 0.4645
#include<stdio.h>
double squaremeter(float fsquareFeet)
{
    float SquareMeter = fsquareFeet * 0.0929;
    return SquareMeter;
}
int main()
{
    int ival = 0;
    printf("Enter area in square feet\n");
    scanf("%d",&ival);
    double sqmeter = squaremeter(ival);
    printf("Area in square meter is : %.4f\n",sqmeter);
    return 0;
}