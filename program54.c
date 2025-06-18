#include<stdio.h>
void display(int iNo){
    int iDigit= 0;
    printf("---------------\n");
    printf("value of iNo is %d \n",iNo);//721

    iDigit = iNo%10;
    printf("%d\n",iDigit); //1
    iNo = iNo/10; //72
    printf("value of iNo is %d",iNo);//72

    printf("---------------\n");
    iDigit = iNo%10; //2
    printf("%d\n",iDigit); //2
    iNo = iNo/10; //7
    printf("value of iNo is %d",iNo);//7

    printf("---------------\n");
    iDigit = iNo%10; //7
    printf("%d\n",iDigit); //7
    iNo = iNo/10; //0
    printf("value of iNo is %d",iNo);//0


}

int main()
{
    int iValue = 721;
    display(iValue);
    return 0;
}