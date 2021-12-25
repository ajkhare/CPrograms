/*  
Auther  : Ajinkya Khare
Goal    : Usage of basic arithmatic operators
*/

#include <stdio.h>
#include <stdlib.h>

int number1;
int number2;
int add_result;
int sub_result;
int multiplication;
int quotient;
int remainder;

int main (void)
{
    printf("Enter number1 : ");
    scanf("%d", &number1);

    printf("Enter number2 : ");
    scanf("%d", &number2);

    printf("number1 = %d and number2 = %d", number1, number2);

    
    add_result = number1 + number2;
    sub_result = number1 - number2;
    multiplication = number1 * number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("\n%d + %d = %d", number1, number2,add_result);
    printf("\n%d - %d = %d", number1, number2, sub_result);
    printf("\n%d * % d = %d", number1, number2, multiplication);
    printf("\n%d / %d = %d", number1, number2, quotient);
    printf("\n%d %% %d = %d", number1, number2, remainder);
    
    exit(0);
}