#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter the grade - A, B, C or D: \t");
    scanf(" %c", &grade); // get the value from user
    // if grade is A or a

    if (grade == 'A' || grade == 'a') // logical operator
        printf("Excellent Student");
    else if ((grade == 'B') | (grade == 'b')) // bitwise operator
        printf("Very Good Student");
    else if (grade == 'C' || grade == 'c') // logical 'or' operator
        printf("Good Student");
    else if (grade == 'D' || grade == 'd')
        printf("Need improvements");
    else
        printf("Invalid grade");


    return 0;
}