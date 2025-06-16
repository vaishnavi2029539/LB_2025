#include<stdio.h>
#define PI 3.14
/// @brief 
///Name : calculateArea
///description : this function calculate the area of circle
///author : vaishnavi jadhav (1234)
/// @param radius 
/// @return flaot//
float calculateArea(float radius)
{
    auto float fAreaOfCircle = 0.0f;
    fAreaOfCircle = PI*radius*radius;
    return fAreaOfCircle;
}

int main()
{
    auto float radius = 0.0f;
    auto float fAns = 0.0f;

    printf("Enter the radius \n");
    scanf("%f",&radius);

    fAns = calculateArea(radius);
    printf("Area of circle is %f",fAns);

    return 0;
}