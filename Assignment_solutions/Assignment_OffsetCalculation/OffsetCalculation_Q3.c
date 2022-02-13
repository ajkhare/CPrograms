/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_OffsetCalculation 
*/
#include <stdio.h>
#include <stdlib.h>

struct C
{
    int a[5];
    float f[5];
    double d[5];
}inC;

int main(void)
{   
    printf("sizeof int = %d \n",sizeof(int));
    printf("sizeof char = %d \n",sizeof(char));
    printf("sizeof short = %d \n",sizeof(short));
    printf("sizeof float = %d \n",sizeof(float));
    printf("sizeof double = %d \n",sizeof(double));

    printf("<----------------------------------------------------->\n");
    /* Example 3
    Access variables, Calculate Offset and pointer arithmatic */
    inC.a[0] = 0; inC.a[1] = 1; inC.a[2] = 2; inC.a[3] = 3; inC.a[4] = 4;                       // offset = 0
    inC.f[0] = 1.0; inC.f[1] = 1.1; inC.f[2] = 1.2; inC.f[3] = 1.3; inC.f[4] = 1.4;             // offset = 20
    inC.d[0] = 200.0; inC.d[1] = 200.1; inC.d[2] = 200.2; inC.d[3] = 200.3; inC.d[4] = 200.4;   // offset = 40

    printf("Example 3 --> Display offsets \n");
    
    printf("sizeof(struct C) : %llu \n", (unsigned long long int)sizeof(struct C));
    printf("inC.a = %llu, inC.f = %llu, inC.d = %llu \n", 
    (unsigned long long int)&inC.a, (unsigned long long int)&inC.f, (unsigned long long int)&inC.d);

    // printing base address of internal array variables
    printf("\ninC.f[1] = %llu \n", (unsigned long long int)&inC.f[1]);
    printf("inC.d[4] = %llu \n", (unsigned long long int)&inC.d[4]);

    printf("\nExample 3 --> Display variables values \n");
    printf("inC.a[0] = %d, inC.a[1] = %d, inC.a[2] = %d, inC.a[3] = %d, inC.a[4] = %d \n",
    inC.a[0], inC.a[1], inC.a[2], inC.a[3], inC.a[4]);
    printf("inC.f[0] = %f, inC.f[1] = %f, inC.f[2] = %f, inC.f[3] = %f, inC.f[4] = %f \n",
    inC.f[0], inC.f[1], inC.f[2], inC.f[3], inC.f[4]);
    printf("inC.d[0] = %lf, inC.d[1] = %lf, inC.d[2] = %lf, inC.d[3] = %lf, inC.d[4] = %lf \n",
    inC.d[0], inC.d[1], inC.d[2], inC.d[3], inC.d[4]);

    

    exit(0);
}