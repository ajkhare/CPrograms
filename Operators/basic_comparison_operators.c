/*
Auther  : Ajinkya Khare
Goal    : Understand basic comparison operators
*/

#include <stdio.h>
#include <stdlib.h>

int number1;
int number2;
int result;

int main(void)
{
    printf("Enter number1 : ");
    scanf("%d",&number1);

    printf("Enter number2 : ");
    scanf("%d", &number2);
    
    result = (number1 > number2);
    printf("\nResult of %d > %d = %d", number1, number2, result);
    
    result = (number1 < number2);
    printf("\nResult of %d < %d = %d",number1, number2, result);

    result = (number1 >= number2);
    printf("\nResult of %d >= %d = %d", number1, number2, result);
    
    result = (number1 <= number2);
    printf("\nResult of %d <= %d = %d", number1, number2, result);
    
    result = (number1 == number2);
    printf("\nResult of %d == %d = %d", number1, number2, result);
    
    result = (number1 != number2);
    printf("\nResult of %d != %d = %d", number1, number2, result);

    exit(0);
    
}
