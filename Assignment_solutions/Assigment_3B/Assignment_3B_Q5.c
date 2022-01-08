/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3B_Q5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a;
    float b;
    float c;
    float tempAns;
    float root1;
    float root2;

    // compute roots of a quadratic equation
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);

    if(a == 0)
    {
        printf("Value of a cannot be Zero, exiting");
        exit(1);
    }
    tempAns = pow(b,2) - (4*a*c);
    if(tempAns < 0)
    {
        printf("b^2 - 4a*c* cannot be less than Zero, hence exiting");
        exit(1);
    }
    root1 = (-b + sqrt(tempAns)) / (2 * a);
    root2 = (-b - sqrt(tempAns)) / (2 * a);

    printf("Roots of the quadratic equation : %.2fx^2 + %.2fx + %.2f = 0 are following\n",a,b,c);
    printf("root1 = %.4f and root2 = %.4f",root1,root2);

    exit(0);
}
