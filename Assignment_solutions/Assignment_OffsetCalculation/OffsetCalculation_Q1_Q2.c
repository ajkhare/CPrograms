/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_OffsetCalculation 
*/
#include <stdio.h>
#include <stdlib.h>

// Example 1
struct A
{
    int a;
    char b;
    float c;
}inA;

// Example 2
struct B
{
    int a;
    char b;
    short s_arr[4];
    int c;
    float d;
}inB;


int  main (void)
{
    
    printf("sizeof int = %d \n",sizeof(int));
    printf("sizeof char = %d \n",sizeof(char));
    printf("sizeof short = %d \n",sizeof(short));
    printf("sizeof float = %d \n",sizeof(float));
    printf("sizeof double = %d \n",sizeof(double));

    printf("<----------------------------------------------------->\n");
    /* Example 1
    Access variables, Calculate Offset and pointer arithmatic */
    
    inA.a = 10;         // offset = 0
    inA.b = 'c';        // offset = 4 (3 bytes padding)
    inA.c = 3.14;       // offset = 8
    /*
    Assume base address = 2000 then
    inA.a = 2000 + offset(a) = 2000 + 0 = 2000
    inA.b = 2000 + offset(b) = 2000 + 4 = 2004
    inA.c = 2000 + offset(c) = 2000 + 8 = 2008
    */
    printf("Example 1 --> Display offsets \n");
 
    printf("sizeof(struct A) : %llu \n", (unsigned long long int)sizeof(struct A));
    printf("inA.a = %llu, inA.b = %llu, inA.c = %llu \n",(unsigned long long int)&inA.a, (unsigned long long int)&inA.b, (unsigned long long int)&inA.c);

    printf("Example 1 --> Display variables values \n");
    printf("inA.a = %d, inA.b = %c, inA.c = %f \n",inA.a, inA.b, inA.c);

    /*
    struct inA* ptr_inA = (struct inA*)2000;
    printf("Base address of pointer ptr_inA = %llu", *ptr_inA);
    for (int i=0; i<3; ++i)
    {
        printf("ptr_inA + %d = %llu\n", i, (unsigned long long int)(ptr_inA + i)); 
    }
    */
    printf("<----------------------------------------------------->\n");
    /* Example 2
    Access variables, Calculate Offset and pointer arithmatic */
    inB.a = 100;            // offset = 0
    inB.b = 'z';            // offset = 4 (1 bytes padding)
    inB.s_arr[0] = 10;      // offset = 6   (since short if 2 bytes)
    inB.s_arr[1] = 20;
    inB.s_arr[2] = 30;
    inB.s_arr[3] = 40;      // End padding = 2 bytes
    inB.c = 200;            // offset = 16 
    inB.d = 6.99;         // offset = 20

    printf("Example 2 --> Display offsets \n");
 
    printf("sizeof(struct B) : %llu \n", (unsigned long long int)sizeof(struct B));
    printf("inB.a = %llu, inB.b =  %llu, inB.s_arr =  %llu, inB.c =  %llu, inB.d =  %llu \n",
       (unsigned long long int)&inB.a, (unsigned long long int)&inB.b, 
       (unsigned long long int)&inB.s_arr, (unsigned long long int)&inB.c, (unsigned long long int)&inB.d);
    
    // printing base address of internal array variables
    printf("\ninB.s_arr[0] = %llu, inB.s_arr[3] = %llu \n", (unsigned long long int)&inB.s_arr[0], (unsigned long long int)&inB.s_arr[3]);
    printf("inB.c = %llu \n", (unsigned long long int)&inB.c);
    printf("inB.d = %llu \n", (unsigned long long int)&inB.d);

    printf("\nExample 2 --> Display variables values \n");
    printf("inB.a = %d, inB.b = %c, inB.c = %d, inB.d = %f \n",inB.a, inB.b, inB.c, inB.d);
    printf("inB.s_arr[0] = %hd, inB.s_arr[1] = %hd, inB.s_arr[2] = %hd, inB.s_arr[3] = %hd \n",
     inB.s_arr[0], inB.s_arr[1], inB.s_arr[2], inB.s_arr[3]);

    // printing base address of internal array variables
    printf("inB.s_arr[0] = %llu, inB.s_arr[3] = %llu \n", (unsigned long long int)&inB.s_arr[0], (unsigned long long int)&inB.s_arr[3]);
    printf("inB.c = %llu \n", (unsigned long long int)&inB.c);
    printf("inB.d = %llu \n", (unsigned long long int)&inB.d);

    exit(0);

}
