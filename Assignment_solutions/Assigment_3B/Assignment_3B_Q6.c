/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3B_Q6
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    unsigned int a,b,c;
    unsigned int perimeter;
    float semi_perimeter;
    float areaTriangle;
    float measureA, measureB, measureC;

    // Accept values of sides of triangle
    printf("Enter value of a : ");
    scanf("%u", &a);

    printf("Enter value of b : ");
    scanf("%u", &b);
    
    printf("Enter value of c : ");
    scanf("%u", &c);

    if( a <= 0 && b <= 0 && c <= 0)
    {
        printf("Sides of triangle cannot be negative, exiting");
        exit(1);
    }
    if(((a+b) <= c) || ((a+c) <= b) || ((b+c) <= a))
    {
        printf("Sum of the length of any two sides of a triangle is NOT greater than the length of the third side, exiting");
        exit(1);
    }

    // Calculate perimeter and area
    perimeter = a + b + c;
    semi_perimeter = perimeter/2;
    areaTriangle = sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));

    printf("Perimeter of a triangle = %u\n", perimeter);
    printf("Semi-Perimeter of a triangle = %.4f\n", semi_perimeter);
    printf("Area of a triangle = %.10f\n", areaTriangle);

    // Calculate angles
    measureA = acos((pow(b,2) + pow(c,2) - pow(a,2)) / (2 * b * c));
    measureB = acos((pow(c,2) + pow(a,2) - pow(b,2)) / (2 * c * a));
    measureC = acos((pow(a,2) + pow(b,2) - pow(c,2)) / (2 * a * b));

    printf("Measure of angle A (in radians) = %f\n",measureA);
    printf("Measure of angle B (in radians) = %f\n",measureB);
    printf("Measure of angle C (in radians) = %f\n",measureC);

    exit(0);
}   
