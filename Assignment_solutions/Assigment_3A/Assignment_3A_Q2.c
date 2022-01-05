/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_3A_Q2 on operators and its precedence
*/

#include <stdio.h>
#include <stdlib.h>

float a = 3.4; 
float b = 2.0; 
float c = 2.5; 
float d = 9.1;
float rs;

int main(void)
{
    // 2.1 -->      rs = a + b + c + d = 17.0
    rs = a + b + c + d;
    printf("2.1 --> Expected=17.0, Actual rs = a + b + c + d = %f\n", rs);

    // 2.2 -->      rs = a/b + c/d = 1.974725274725275
    rs = a/b + c/d;
    printf("2.2 --> Expected=1.974725274725275, Actual rs = a/b + c/d = %f\n", rs);

    // 2.3 -->      rs = (a+b)/(c+d) = 5.4/11.6 = 0.4655172413793103
    rs = (a+b)/(c+d);
    printf("2.3 --> Expected=0.4655172413793103, Actual rs = (a+b)/(c+d) = %f\n", rs);
    
    // 2.4 -->      rs = a * 9 / 5 + 32 = 5.4/11.6 = 38.12                              // TODO : Why Round off to lower
    rs = a * 9 / 5 + 32;
    printf("2.4 --> Expected=38.12, Actual rs = a * 9 / 5 + 32 = %f\n", rs);

    // 2.5 -->      rs = ((a+b+c)/2)*((a+b+c)/2 – a)*((a+b+c)/2 – b)*((a + b + c)/2 – c) = 6.142744
    rs = ((a+b+c)/2)*((a+b+c)/2 - a)*((a+b+c)/2 - b)*((a + b + c)/2 - c);
    printf("2.5 --> Expected=6.142744 , Actual rs = ((a+b+c)/2)*((a+b+c)/2 - a)*((a+b+c)/2 - b)*((a + b + c)/2 - c) = %f\n", rs);

    // 2.6 -->      rs = (((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*(a+b+c+d)/2-c)* ((a+b+c+d)/2-d) = -167.565109
    //rs = ((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*(a+b+c+d)/2-c)* ((a+b+c+d)/2-d);
    rs = (((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*(a+b+c+d)/2-c)* ((a+b+c+d)/2-d);
    printf("2.6 --> Expected=-167.565109, Actual rs = (((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*(a+b+c+d)/2-c)* ((a+b+c+d)/2-d) = %f\n", rs);

    // 2.7 -->      rs = (a + b + c + d) / 4; = 4.25
    rs = (a + b + c + d) / 4;
    printf("2.7 --> Expected=4.25, Actual rs = (a+b+c+d)/4) = %f\n", rs);

    // 2.8 -->      rs =  a + b + c + d / 4; = 10.175
    rs = a + b + c + d / 4;
    printf("2.8 --> Expected=10.175, Actual rs = a + b + c + d / 4) = %f\n", rs);

    // 2.9 -->      rs = (-b + b*b – 4*a*c)/(2*a); = (-2.0 + 4 - 34.0) / 6.8 = -4.705882352941176
    rs = (-b + b*b - 4*a*c)/(2*a);
    printf("2.9 --> Expected=-4.705882352941176, Actual rs = (-b + b*b - 4*a*c)/(2*a)) = %f\n", rs);

    // 2.10 -->      rs = (-b - b*b – 4*a*c)/(2*a);  = (-2.0 - 4 - 34.0) / 6.8 = -5.882352941176471
    rs = (-b - b*b - 4*a*c)/(2*a);
    printf("2.10 --> Expected=-5.882352941176471, Actual rs = (-b - b*b - 4*a*c)/(2*a)) = %f\n", rs);

    // 2.11 -->      rs = ((((a + b) * c) + d)/c) + a;  = ((5.4 * 2.5 ) + 9.1) / 2.5 + 3.4  = 12.44          // TODO : Why Round off
    rs = ((((a + b) * c) + d)/c) + a;
    printf("2.11 --> Expected=12.44, Actual rs = ((((a + b) * c) + d)/c) + a = %f\n", rs);

    // 2.12 -->      rs = d – d*d/2 + d*d*d*d/4*3*2*1  = 9.1 - 82.81/2 + 6857.4961/4*3*2*1 = 9.1 - 41.405 + 10286.24415 = 10253.93915
    rs = d - d*d/2 + d*d*d*d/4*3*2*1;           
    printf("2.12 --> Expected=10253.93915, Actual rs = d - d*d/2 + d*d*d*d/4*3*2*1 = %f\n", rs);        // TODO : Slight mismatch

    // 2.13 -->      rs = (b*b + c*c – a*a)/(2*b*c);  = (4.0 + 6.25 - 11.56)/10.0  = -0.131
    rs = (b*b + c*c - a*a)/(2*b*c);
    printf("2.13 --> Expected=-0.131, Actual rs = (b*b + c*c - a*a)/(2*b*c) = %f\n", rs);

    // 2.14 -->      rs = 2 * 3.1415 * b;  =  12.566
    rs = 2 * 3.1415 * b;
    printf("2.14 --> Expected=12.566, Actual rs = 2 * 3.1415 * b = %f\n", rs);

    // 2.15 -->      rs = (3.1415/180.0) * b;  =  0.0349444444444444                // TODO : Slight mismatch
    rs = (3.1415/180.0) * b;
    printf("2.15 --> Expected=0.0349444444444444, Actual rs = (3.1415/180.0) * b = %f\n", rs);

    // 2.16 -->      rs = (180.0/3.1415) * b;  =  114.5949387235397
    rs = (180.0/3.1415) * b;
    printf("2.16 --> Expected=114.5949387235397, Actual rs = (180.0/3.1415) * b = %f\n", rs);

    // 2.17 -->      rs = a*a – 2*a*b + b*b;  = 11.56 - 13.6 + 4.0 = 1.96
    rs = a*a - 2*a*b + b*b;
    printf("2.17 --> Expected=1.96, Actual rs = a*a - 2*a*b + b*b = %f\n", rs);
    // 2.17 -->      rs = (a-b) * (a-b);  =  1.96
    rs = (a-b) * (a-b);
    printf("2.17 --> Expected=1.96, Actual rs = (a-b) * (a-b) = %f\n", rs);

    // 2.18 -->      rs = a*a + 2*a*b + b*b;  = 11.56 + 13.6 + 4.0 = 29.16
    rs = a*a + 2*a*b + b*b;
    printf("2.18 --> Expected=29.16, Actual rs = a*a + 2*a*b + b*b = %f\n", rs);
    // 2.18 -->      rs = (a+b) * (a+b);  =  29.16
    rs = (a+b) * (a+b);
    printf("2.18 --> Expected=29.16, Actual rs = (a+b) * (a+b) = %f\n", rs);

    // 2.19 -->      rs = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b  = 39.304 + 69.36 + 40.8 + 8.0  = 157.464
    rs = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b;                         
    printf("2.19 --> Expected=157.464, Actual rs = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b = %f\n", rs);      // TODO : Slight mismatch
    // 2.19 -->      rs = (a+b) * (a+b) * (a+b)  = 5.4 * 5.4 * 5.4 =  157.464
    rs = (a+b) * (a+b) * (a+b);
    printf("2.19 --> Expected=157.464, Actual rs = (a+b) * (a+b) * (a+b) = %f\n", rs);                  // TODO : Slight mismatch

    // 2.20 -->      rs = a*a*a – 3*a*a*b + 3*a*b*b – b*b*b  = 39.304 - 69.36 + 40.8 - 8.0  = 2.744
    rs = a*a*a - 3*a*a*b + 3*a*b*b - b*b*b;
    printf("2.20 --> Expected=2.744, Actual rs = a*a*a - 3*a*a*b + 3*a*b*b - b*b*b = %f\n", rs);        // TODO : Slight mismatch
    // 2.20 -->      rs = (a-b) * (a-b) * (a-b)  = 1.4 * 1.4 * 1.4 =  2.744
    rs = (a-b) * (a-b) * (a-b);
    printf("2.20 --> Expected=2.744, Actual rs = (a+b) * (a+b) * (a+b) = %f\n", rs);                    // TODO : Slight mismatch

    // 2.21 -->      rs = (a+b)*(a+b) – (a-b)*(a-b)  = 29.16 - 1.96 = 27.2
    rs = (a+b)*(a+b) - (a-b)*(a-b);
    printf("2.21 --> Expected=27.2, Actual rs = (a+b)*(a+b) - (a-b)*(a-b) = %f\n", rs);
    // 2.21 -->      rs = 4 * a * b  = 1.4 * 1.4 * 1.4 =  27.2
    rs = 4 * a * b;
    printf("2.21 --> Expected=27.2, Actual rs = 4 * a * b = %f\n", rs);

    // 2.22 -->      rs = 2 * (a*a + b*b)  = 31.12
    rs = 2 * (a*a + b*b);
    printf("2.22 --> Expected=31.12, Actual rs = (a+b)*(a+b) - (a-b)*(a-b) = %f\n", rs);            // TODO : Slight mismatch
    // 2.22 -->      rs = (a+b) * (a+b) + (a-b) * (a-b)  = 29.16 + 1.96 =  31.12
    rs = (a+b) * (a+b) + (a-b) * (a-b);
    printf("2.22 --> Expected=31.12, Actual rs = (a+b) * (a+b) + (a-b) * (a-b) = %f\n", rs);       // TODO : Slight mismatch

    // 2.23 -->      rs = a*a*a + b*b*b  = 39.304 + 8.0 = 47.304
    rs = a*a*a + b*b*b;
    printf("2.23 --> Expected=47.304, Actual rs = a*a*a + b*b*b = %f\n", rs);                       // TODO : Slight mismatch
    // 2.23 -->      rs = (a+b)*(a+b)*(a+b) – 3*a*b*(a+b)  = 157.464 - 110.16  =  47.304        
    rs = (a+b)*(a+b)*(a+b) - 3*a*b*(a+b);
    printf("2.23 --> Expected=47.304, Actual rs = (a+b)*(a+b)*(a+b) - 3*a*b*(a+b) = %f\n", rs);     // TODO : Slight mismatch

    // 2.24 -->      rs = a*a*a – b*b*b  = 39.304 - 8.0 = 31.304
    rs = a*a*a + b*b*b;
    printf("2.24 --> Expected=31.304, Actual rs = a*a*a - b*b*b = %f\n", rs);                       // TODO : Slight mismatch
    // 2.24 -->      rs = (a-b)*(a-b)*(a-b) + 3*a*b*(a-b)  = 2.744 + 28.56  =  31.304
    rs = (a-b)*(a-b)*(a-b) + 3*a*b*(a-b);
    printf("2.24 --> Expected=31.304, Actual rs = (a-b)*(a-b)*(a-b) + 3*a*b*(a-b)= %f\n", rs);      // TODO : Slight mismatch

    // 2.25 -->      rs = a*a*a + b*b*b + c*c*c – 3*a*b*c  = 39.304 + 8.0 + 15.625 - 51.0  = 11.929
    rs = a*a*a + b*b*b + c*c*c - 3*a*b*c;
    printf("2.25 --> Expected=11.929, Actual rs = a*a*a + b*b*b + c*c*c - 3*a*b*c = %f\n", rs);             // TODO : Slight mismatch
    // 2.25 -->      rs = (a+b+c)*(a*a +b*b+c*c -a*b -b*c-c*a)  = 7.9 * (11.56 + 4 + 6.25 - 6.8 - 5 - 8.5)  =  11.929
    rs = (a+b+c)*(a*a +b*b+c*c -a*b -b*c-c*a);
    printf("2.25 --> Expected=11.929, Actual rs = (a+b+c)*(a*a +b*b+c*c -a*b -b*c-c*a)= %f\n", rs);         // TODO : Slight mismatch

    exit(0);
}
