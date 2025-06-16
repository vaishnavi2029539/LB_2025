//problem statement : accept the percentage obtaines for student and display 
//0 to 35 Fail
//35 to 50 pass


//TRUE && TRUE
//TRUE || FALSE





#include<stdio.h>
void displayClass(float percentages)
{
    if(percentages<0.0 || percentages<100.00){
        printf("invalid marks");
    }

    else if((percentages >0.0) && (percentages<35.00))
    {
        printf("You are fail    \n");
    }else if ((percentages >35.00) && (percentages<50.00))
    {
        printf("you are pass  \n");
    }else if ((percentages >=50.00) && (percentages <60.00))
    {
        printf("pass with second class");
    }
    else if ((percentages >=60.00) && (percentages <75.00))
    {
        printf("pass with first class");
    }
    else if ((percentages >=75.00) && (percentages <100.00)){
        printf("pass with distinction");
   // }else{
    //   printf("wrong input");
    }
}

int main()
{
    float fPercentage = 0.0f;
    printf("enter obtaion percentage");
    scanf("%f",&fPercentage);
    displayClass(fPercentage);
    return 0;

}