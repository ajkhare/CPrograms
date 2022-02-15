/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_OffsetCalculation 
*/
#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    struct B
    {
        double d1;
        double d2;
        struct C
        {
            int a[4];
            int b[4];
        }inC;
        float x;
        float y;
    }inB;
    double k1;
    double k2;
}inA;

int main(void)
{
    printf("sizeof int = %d \n",sizeof(int));
    printf("sizeof char = %d \n",sizeof(char));
    printf("sizeof short = %d \n",sizeof(short));
    printf("sizeof float = %d \n",sizeof(float));
    printf("sizeof double = %d \n",sizeof(double));

    printf("<----------------------------------------------------->\n");
    /* Example 4
    Access variables, Calculate Offset and pointer arithmatic */

    inA.a=10;
    inA.b='z';
    inA.inB.d1=4555.5566;
    inA.inB.d2=6566.5566;
    inA.inB.inC.a[0] = 1; inA.inB.inC.a[1] = 1; inA.inB.inC.a[2] = 1; inA.inB.inC.a[3] = 1; inA.inB.inC.a[4] = 1;
    inA.inB.inC.b[0] = 2; inA.inB.inC.b[1] = 2; inA.inB.inC.b[2] = 2; inA.inB.inC.b[3] = 2; inA.inB.inC.b[4] = 2;
    inA.inB.x = 41.1;
    inA.inB.y = 12.45;
    inA.k1 = 877.9999;
    inA.k1 = 581.11111;

    printf("Example 4 --> Display offsets \n");
    printf("sizeof(struct A) : % llu\n", (unsigned long long int)sizeof(struct A));
    printf("inA.a = %llu, inA.b = %llu, inA.inB.d1 = %llu, inB.inB.d2 = %llu, inA.inB.inC.a[0] = %llu, inA.inB.inC.b[0] = %llu, inA.inB.x = %llu, inA.inB.y = %llu, inA.k1 = %llu, inA.k2 = %llu \n", 
    (unsigned long long int)&inA.a, (unsigned long long int)&inA.b, (unsigned long long int)&inA.inB.d1, 
    (unsigned long long int)&inA.inB.d2, (unsigned long long int)&inA.inB.inC.a[0], (unsigned long long int)&inA.inB.inC.b[0], 
    (unsigned long long int)&inA.inB.x, (unsigned long long int)&inA.inB.y, (unsigned long long int)&inA.k1, (unsigned long long int)&inA.k2);

    // printing base address of internal array variables
    printf("\ninA.inB.inC.a[4] = %llu \n", (unsigned long long int)&inA.inB.inC.a[4]);
    printf("inA.inB.inC.b[4] = %llu \n", (unsigned long long int)&inA.inB.inC.b[4]);

    printf("\nExample 4 --> Display variables values \n");
    printf("inA.a = %d, inA.b[1] = %c, inA.inB.d1 = %lf, inA.inB.d2 = %lf \n",
    inA.a, inA.b, inA.inB.d1, inA.inB.d2);
    printf("inA.inB.inC.a[0] = %d, inA.inB.inC.a[1] = %d, inA.inB.inC.a[2] = %d, inA.inB.inC.a[3] = %d, inA.inB.inC.b[0] = %d, inA.inB.inC.b[1] = %d, inA.inB.inC.b[2] = %d, inA.inB.inC.b[3] = %d \n",
    inA.inB.inC.a[0], inA.inB.inC.a[1], inA.inB.inC.a[2], inA.inB.inC.a[3],
    inA.inB.inC.b[0], inA.inB.inC.b[1], inA.inB.inC.b[2], inA.inB.inC.b[3]);

    printf("inA.inB.x = %f, inA.inB.y = %f, inA.k1 = %lf, inA.k2 = %lf \n",
    inA.inB.x, inA.inB.y, inA.k1, inA.k2);

    exit(0);


}