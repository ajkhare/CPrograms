/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_OffsetCalculation 
*/
#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a1;
    char b1;
    int c1;
    char d1;
    struct B
    {
        char a2;
        short s2[3];
        struct C
        {
            int a3;
            short s3;
            struct D
            {
                char c41, c42;
                short s4;
                int n4;
            }inD3;
            int c3;
            char d3;
        }inC2;
        int n2;
        long long int p2;
    }inB1;
    long long int n1;
    long long int z1;
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

    inA.a1 = 10;
    inA.b1 = 'z';
    inA.c1 = 20;
    inA.d1 = 'y';
    inA.inB1.a2 = 'x';
    inA.inB1.s2[0] = 100; inA.inB1.s2[1] = 100; inA.inB1.s2[2] = 100;
    inA.inB1.inC2.a3 = 200; inA.inB1.inC2.s3 = 200;
    inA.inB1.inC2.inD3.c41 = 'v'; inA.inB1.inC2.inD3.c42 = 'v';
    inA.inB1.inC2.inD3.s4 = 300;
    inA.inB1.inC2.inD3.n4 = 300;
    inA.inB1.inC2.c3 = 500;
    inA.inB1.inC2.d3 = 'm';
    inA.inB1.n2 = 800;
    inA.inB1.p2 = 800000;
    inA.n1 = 900000;
    inA.z1 = 999999;

    printf("Example 5 --> Display offsets \n");
    printf("sizeof(struct A) : % llu\n", (unsigned long long int)sizeof(struct A));
    printf("inA.a1 = %llu, inA.b1 = %llu, inA.c1 = %llu, inA.d1 = %llu \n", 
    (unsigned long long int)&inA.a1, (unsigned long long int)&inA.b1, (unsigned long long int)&inA.c1, 
    (unsigned long long int)&inA.d1);

    printf("inA.inB1.a2 = %llu, inA.inB1.s2[0] = %llu, inA.inB1.inC2.a3 = %llu, inA.inB1.inC2.s3 = %llu \n", 
    (unsigned long long int)&inA.inB1.a2, (unsigned long long int)&inA.inB1.s2[0] , 
    (unsigned long long int)&inA.inB1.inC2.a3, (unsigned long long int)&inA.inB1.inC2.s3);

    printf("inA.inB1.inC2.inD3.c41 = %llu, inA.inB1.inC2.inD3.c42 = %llu, inA.inB1.inC2.inD3.s4 = %llu, inA.inB1.inC2.inD3.n4 = %llu \n", 
    (unsigned long long int)&inA.inB1.inC2.inD3.c41, (unsigned long long int)&inA.inB1.inC2.inD3.c42, 
    (unsigned long long int)&inA.inB1.inC2.inD3.s4, (unsigned long long int)&inA.inB1.inC2.inD3.n4);

    printf("inA.inB1.inC2.c3 = %llu, inA.inB1.inC2.d3 = %llu, inA.inB1.n2 = %llu, inA.inB1.p2 = %llu, inA.n1 = %llu, inA.z1 = %llu  \n", 
    (unsigned long long int)&inA.inB1.inC2.c3, (unsigned long long int)&inA.inB1.inC2.d3, 
    (unsigned long long int)&inA.inB1.n2, (unsigned long long int)&inA.inB1.p2,
    (unsigned long long int)&inA.n1, (unsigned long long int)&inA.z1);

    exit(0);
}