/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3B_Q7
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    unsigned int a,b,c,d;
    unsigned int perimeter;
    float semi_perimeter;
    float areaRectangle;
    float measureA, measureB, measureC;

    // Accept values of sides of quadrilateral rectangle
    printf("Enter value of a : ");
    scanf("%u", &a);

    printf("Enter value of b : ");
    scanf("%u", &b);
    
    printf("Enter value of c : ");
    scanf("%u", &c);

    printf("Enter value of d : ");
    scanf("%u", &d);

    if( a <= 0 && b <= 0 && c <= 0 && d <= 0)
    {
        printf("Sides of rectangle cannot be negative, exiting");
        exit(1);
    }

    if(((a+b+c) <= d) || ((a+b+d) <= c) || ((a+c+d) <= b) || ((b+c+d) <= a))
    {
        printf("Sum of the length of any three sides of a rectangle is NOT greater than the length of the fourth side, exiting");
        exit(1);
    }

    // Calculate perimeter and area
    perimeter = a + b + c + d;
    semi_perimeter = perimeter/2;
    areaRectangle = sqrt((semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c) * (semi_perimeter - d));

    printf("Perimeter of a rectangle = %u\n", perimeter);
    printf("Semi-Perimeter of a triangle = %.4f\n", semi_perimeter);
    printf("Area of a triangle = %.10f\n", areaRectangle);

    // Calculate angles
    measureA = acos((pow(b,2) + pow(c,2) - pow(a,2)) / (2 * b * c));
    measureB = acos((pow(c,2) + pow(a,2) - pow(b,2)) / (2 * c * a));
    measureC = acos((pow(a,2) + pow(b,2) - pow(c,2)) / (2 * a * b));

    printf("Measure of angle A (in radians) = %f\n",measureA);
    printf("Measure of angle B (in radians) = %f\n",measureB);
    printf("Measure of angle C (in radians) = %f\n",measureC);

    exit(0);
}   
