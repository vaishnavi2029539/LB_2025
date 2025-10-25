//write program to get distance in kilometer and convert it into meter (1KM = 1000meter)
//input 5
//output 5000
#include<stdio.h>
int KMtoMeter(float fKM)
{
    int meter = fKM * 1000;
    printf("Distance in meter is: %d\n",meter);
}
int main()
{
    int iVal = 0.0;
    printf("Enter distance in KM:");
    scanf("%d",&iVal);
    int meter = KMtoMeter(iVal);
    return 0;
}