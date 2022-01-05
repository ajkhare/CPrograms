/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3A on operators and its precedence
*/

#include <stdio.h>
#include <stdlib.h>

int a=10;
int b=20;
int c=3;
int d=2;
int rs;

int main(void)
{
    // 1.1 -->      rs=a+b-d = 28
    rs=a+b-d;
    printf("1.1 --> Expected=28, Actual a+b-d = %d\n", rs);

    // 1.2 -->      rs=a-b*d = -30
    rs=a-b*d;
    printf("1.2 --> Expected=-30, Actual a-b*d = %d\n", rs);

    // 1.3 -->      rs=a*c-b = 10
    rs=a*c-b;
    printf("1.3 --> Expected=10, Actual a*c-b = %d\n", rs);
    
    // 1.4 -->      rs=a*c+b*d = 70
    rs=a*c+b*d;
    printf("1.4 --> Expected=70, Actual a*c+b*d = %d\n", rs);
    
    // 1.5 -->      rs=a/c+b*d = 43
    rs=a/c+b*d;
    printf("1.5 --> Expected=43 , Actual a/c+b*d = %d\n", rs);

    // 1.6 -->      rs=a*c+b/d = 40
    rs=a*c+b/d;
    printf("1.6 --> Expected=40 , Actual a/c+b*d = %d\n", rs);

    // 1.7 -->      rs=a+b*c-d = 68
    rs=a+b*c-d;
    printf("1.7 --> Expected=68 , Actual a+b*c-d = %d\n", rs);

    // 1.8 -->      rs=a-b/c+d = 6
    rs=a-b/c+d;
    printf("1.8 --> Expected=6 , Actual a-b/c+d = %d\n", rs);
    
    // 1.9 -->      rs=(a+b)*(c/d) = 30 
    rs=(a+b)*(c/d);
    printf("1.9 --> Expected=30 , Actual (a+b)*(c/d) = %d\n", rs);

    // 1.10 -->      rs=(a+b)*c/d = 45
    rs=(a+b)*c/d;
    printf("1.10 --> Expected=45 , Actual (a+b)*c/d = %d\n", rs);

    // 1.11 -->      rs = ((a + b) * (c – d)) / (a * (b + (c – d) * b))= 0
    rs=((a + b) * (c - d)) / (a * (b + (c - d) * b));
    printf("1.11 --> Expected=0 , Actual ((a + b) * (c - d)) / (a * (b + (c - d) * b)) = %d\n", rs);

    // 1.12 -->      rs=(a * (b + c * (d + a))) / (a – (b + (c / d))) = 560 / -11 = -50 
    rs=(a * (b + c * (d + a))) / (a - (b + (c / d)));
    printf("1.12 --> Expected=-50 , Actual (a * (b + c * (d + a))) / (a - (b + (c / d))) = %d\n", rs);

    // 1.13 -->      rs=a + b * c + a / d - b / c + a / 2 = a + 60 + 5 - 6 + 5 = 74
    rs=a + b * c + a / d - b / c + a / 2;
    printf("1.13 --> Expected=74, Actual a + b * c + a / d - b / c + a / 2 = %d\n", rs);

    // 1.14 -->      rs=((((a + b) * c) + d)/c) + a = 40
    rs=((((a + b) * c) + d)/c) + a;
    printf("1.14 --> Expected=40, Actual ((((a + b) * c) + d)/c) + a = %d\n", rs);

    // 1.15 -->      rs=(-b + b*b – 4*a*c)/(2*a) = (-20 + 400 - 120) / 20 = 13  
    rs=(-b + b*b - 4*a*c)/(2*a);
    printf("1.15 --> Expected=13, Actual (-b + b*b - 4*a*c)/(2*a) = %d\n", rs);

    // 1.16 -->      rs=(-b - b*b – 4*a*c)/(2*a) = -27
    rs=(-b - b*b - 4*a*c)/(2*a);
    printf("1.16 --> Expected=-27, Actual (-b - b*b - 4*a*c)/(2*a) = %d\n", rs);

    // 1.17 -->      rs=-b + b*b – 4*a*c / 2*a = -20 + 400 - 120 / 20 =  374
    rs=-b + b*b - 4*a*c / 2*a;
    printf("1.17 --> Expected=374, Actual -b + b*b - 4*a*c / 2*a = %d\n", rs);       // TODO

    // 1.18 -->      rs=-b – b*b – 4*a*c/ 2*a = -20 - 400 - 120 / 20 = 426
    rs=-b - b*b - 4*a*c/ 2*a;
    printf("1.18 --> Expected=-426, Actual -b - b*b - 4*a*c/ 2*a = %d\n", rs);       // TODO

    // 1.19 -->      rs=(a+b)/2 * (c+d)/2 = 30/2 * 5/2 = 30
    rs=(a+b)/2 * (c+d)/2;
    printf("1.19 --> Expected=30, Actual (a+b)/2 * (c+d)/2 = %d\n", rs);         // TODO

    // 1.20 -->      rs=(a + b + c + d) / 4 = 8
    rs=(a + b + c + d) / 4;
    printf("1.20 --> Expected=8, Actual (a + b + c + d) / 4  = %d\n", rs);

    // 1.21 -->      rs=a + b + c + d / 4 = 33
    rs=a + b + c + d / 4;
    printf("1.21 --> Expected=33, Actual a + b + c + d / 4; = %d\n", rs);

    // 1.22 -->      rs=(a*d – b*c)/2 = -20
    rs=(a*d - b*c)/2;
    printf("1.22 --> Expected=-20, Actual (a*d - b*c)/2 = %d\n", rs);

    // 1.23 -->      rs= 1 – d*d*d/3*2*1 + d*d*d*d*d/5*4*3*2*1 = 1 - 4*0*2*1 + 2*2*2*2*2*4*3*2*1 = 769
    rs= 1 - d*d*d/3*2*1 + d*d*d*d*d/5*4*3*2*1;
    printf("1.23 --> Expected=769, Actual 1 - d*d*d/3*2*1 + d*d*d*d*d/5*4*3*2*1 = %d\n", rs);        // TODO

    // 1.24 -->      rs=d – d*d/2 + d*d*d*d/4*3*2*1 = 2 - 2 + 16/24 = 0 
    rs=d -d*d/2 + d*d*d*d/4*3*2*1;
    printf("1.24 --> Expected=0, Actual d - d*d/2 + d*d*d*d/4*3*2*1 = %d\n", rs);       // TODO

    // 1.25 -->      rs=(a*b*c + b*c*a + c*a*b) / 3 = (600 + 600 + 600 ) / 3 = 600
    rs=(a*b*c + b*c*a + c*a*b) / 3;
    printf("1.24 --> Expected=600, Actual (a*b*c + b*c*a + c*a*b) / 3 = %d\n", rs);

    exit(0);
}
