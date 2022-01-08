/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3B_Q4 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    signed int q1;
    signed int q2;
    signed int r;
    float coloumbConstant = 8.988e9;     // as e9 is 10^9
    float force;

    printf("Enter value of q1 : ");
    scanf("%d",&q1);
    printf("Enter value of q2: ");
    scanf("%d",&q2);
    printf("Enter value of r : ");
    scanf("%d",&r);
    
    force = coloumbConstant * q1 * q2 / (r * r);
    //printf("Magniture of Force = %f\n",force);
    if(force < 0)
    {
        printf("Force is Repulsion Force and magniture is = %f",force);
    }
    else
    {
        printf("Force is Attraction Force and magniture is = %f",force);
    }
    
    exit(0);

}
