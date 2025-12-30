/*
Accept division of student and display exam time, consider there are 4 divisions in the school as
A,B, C,D.
Exam Time:
A 7AM
B 8AM
C 9AM
D 10AM
Input: C
Output : Your Exam is at 9AM
Input: X
Output : No division avaiialble
*/
#include <stdio.h>
void showExamTime(char division)
{
    switch (division)
    {
    case 'A':
        printf("Your Exam is at 7AM\n");
        break;
    case 'B':
        printf("Your Exam is at 8AM\n");
        break;
    case 'C':
        printf("Your Exam is at 9AM\n");
        break;
    case 'D':
        printf("Your Exam is at 10AM\n");
        break;
    default:
        printf("No division available\n");
        break;
    }
}
int main()
{
    char ch ='\0';
    printf("Eneter chaaracter \n");
    scanf("%c",&ch);
    showExamTime(ch);
    return 0;
}