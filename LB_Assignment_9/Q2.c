//write a program which accept height of rectangle from user and calculate its area(area = width*height)

#include<stdio.h>
int RecArea(float fheight, float fwidth)
{
    int area = fheight * fwidth;
    return area;
}
int main()
{
    float fVal1 = 0.0, fVal2 = 0.0;
    printf("Enter height:");
    scanf("%f",&fVal1);
    printf("Enter width:");
    scanf("%f",&fVal2);
    double area = RecArea(fVal1,fVal2);
    printf("Area of rectangle is: %.2f",area);
    return 0;
}