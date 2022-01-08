/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3B_Q3 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float m1;
    float m2;
    float r;
    double univarsalContant = 6.67e-11;   //as e-11 is 10^-11)
    float gravitationalForce;
    printf("univarsal constant G = %.20f\n", univarsalContant);        // default format specifier for float is 6 values floowed by .

    // Formula
    // F = G * m1 * m2 / r^2
    
    printf("Enter value of m1 : ");
    scanf("%f",&m1);
    printf("Enter value of m2 : ");
    scanf("%f",&m2);
    printf("Enter value of r : ");
    scanf("%f",&r);
    if(m1 <= 0 || m2 <= 0 || r <= 0)
    {
        printf("User input (values of m1, m2, r) should be positive");
        exit(1);        // exit(1), since errornous exit
    }
    gravitationalForce = univarsalContant * m1 * m2 / (r*r);
    printf("Gravitational Force = %f N",gravitationalForce);

    exit(0);

}
