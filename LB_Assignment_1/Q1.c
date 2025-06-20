#include<stdio.h>
//function to take two integers, divide them and return the result
float divideTwoNumbers()
{
    int num1, num2;
    float result;

    printf("enter the dividend(int):\n");
    scanf("%d",&num1);

    printf("enter the divisor(int):\n");
    scanf("%d",&num2);

    //check for division by zero
    if(num2 == 0){
        printf("Error: Division by zero is not allowed.\n");
        return -1;
    }

    result = (float)num1/num2;
    return result;
}

int main()
{
    float result = divideTwoNumbers();

    //if result is not -1,print division result
    if(result != -1)
    {
        printf("Result = %f\n",result);
    }
    return 0;
}