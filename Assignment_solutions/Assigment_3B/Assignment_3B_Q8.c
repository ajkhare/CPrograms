/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3B_Q8
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int r;
    float pi = 3.14;
    float circumference;
    float areaCircle;
    
    // Accept values of radius of a circle
    printf("Enter value of r : ");
    scanf("%u", &r);

    if(r <= 0)
    {
        printf("Radius of a circle cannot be negative, exiting");
        exit(1);
    }

    circumference = 2 * pi * r;
    areaCircle = pi * r * r;

    printf("Circumference of a circle = %f\n", circumference);
    printf("Area of a circle = %.4f\n", areaCircle);
    
    exit(0);
}