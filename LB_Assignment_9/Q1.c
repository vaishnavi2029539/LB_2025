//write a program which accept radius from user and calculate the area of circle, take value of PI as 3.14 (Area = PI*r*r)
 #include<stdio.h>
float CircleArea(float radius)
{
    float PI = 3.14;
    float Area = PI*radius*radius;
    return Area;
}

 int main()
{
    float iVal = 0.0;
    printf("Enter number\n");
    scanf("%f",&iVal);
    float area = CircleArea(iVal);
    printf("Area of circlr is : %f",area);
    return 0 ;

}