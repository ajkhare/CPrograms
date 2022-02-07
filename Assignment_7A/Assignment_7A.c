/*
    Auther  : Ajinkya Khare
    Goal    : MSTC QuestionSet_7A 
*/

#include <stdio.h>
#include <stdlib.h>




int main(void)
{
    
    int i;

    /* Program 1 */
    printf("Program 1 Started --------->\n");;
    for(i=0; i < 16; ++i)
        printf("i=%d\n", i);
    printf("Program 1 Ends ============================>\n");;
    /* Sample o/p
    0
    1
    2
    upto 15
    */

    /* Program 2 */
    printf("Program 2 Started --------->\n");
    for(i=0; i < 16; i=i+2)
        printf("i=%d\n", i);
    printf("Program 2 Ends ============================>\n");
    /* Sample o/p
    0
    2
    4
    upto 14
    */

    /* Program 3 */
    printf("Program 3 Started --------->\n");
    for(i=0; i < 16; i+=2)
        printf("i=%d\n", i);
    printf("Program 3 Ends ============================>\n");
    /* Sample o/p
    0
    2
    4
    upto 14
    */

    /* Program 4 */
    printf("Program 4 Started --------->\n");
    for(i=0; i < 16; i+=3)
        printf("i=%d\n", i);
    printf("Program 4 Ends ============================>\n");
    /* Sample o/p
    0
    3
    6
    9
    12
    15
    */

    /* Program 5 */
    printf("Program 5 Started --------->\n");
    for(i=0; i < 16; i+=4)
        printf("i=%d\n", i);
    printf("Program 5 Ends ============================>\n");
    /* Sample o/p
    0
    4
    8
    12
    */

    /* Program 6 */
    printf("Program 6 Started --------->\n");
    for(i=0; i < 16; i+=5)
        printf("i=%d\n", i);
    printf("Program 6 Ends ============================>\n");
    /* Sample o/p
    0
    5
    10
    15
    */

    /* Program 7 */
    printf("Program 7 Started --------->\n");
    for(i=0; i < 16; i+=6)
        printf("i=%d\n", i);
    printf("Program 7 Ends ============================>\n");
    /* Sample o/p
    0
    6
    12
    */

    /* Program 8 */
    printf("Program 8 Started --------->\n");
    for(i=0; i < 16; i+=7)
        printf("i=%d\n", i);
    printf("Program 8 Ends ============================>\n");
    /* Sample o/p
    0
    7
    14
    */

    /* Program 9 */
    printf("Program 9 Started --------->\n");
    for(i=0; i < 16; i+=8)
        printf("i=%d\n", i);
    printf("Program 9 Ends ============================>\n");
    /* Sample o/p
    0
    8
    */

    /* Program 10 */
    printf("Program 10 Started --------->\n");
    for(i=0; i < 16; i+=9)
        printf("i=%d\n", i);
    printf("Program 10 Ends ============================>\n");
    /* Sample o/p
    0
    9
    */

    

    /* Program 11 */
    printf("Program 11 Started --------->\n");
    for(i=1; i < 16; i*=2)
        printf("i=%d\n", i);
    printf("Program 11 Ends ============================>\n");
    /* Sample o/p
    1
    2
    4
    8
    */

    /* Program 12 */
    printf("Program 12 Started --------->\n");
    for(i=1; i < 16; i*=3)
        printf("i=%d\n", i);
    printf("Program 12 Ends ============================>\n");
    /* Sample o/p
    1
    3
    9
    */

    /* Program 13 */
    printf("Program 13 Started --------->\n");
    for(i=1; i < 16; i*=4)
        printf("i=%d\n", i);
    printf("Program 13 Ends ============================>\n");
    /* Sample o/p
    1
    4
    */

    /* Program 14 */
    printf("Program 14 Started --------->\n");
    for(i=1; i < 16; i*=5)
        printf("i=%d\n", i);
    printf("Program 14 Ends ============================>\n");
    /* Sample o/p
    1
    5
    */

    /* Program 15 */
    printf("Program 15 Started --------->\n");
    for(i=1; i < 16; i*=6)
        printf("i=%d\n", i);
    printf("Program 15 Ends ============================>\n");
    /* Sample o/p
    1
    6
    */

    /* Program 16 */
    printf("Program 16 Started --------->\n");
    for(i=1; i < 16; i*=7)
        printf("i=%d\n", i);
    printf("Program 16 Ends ============================>\n");
    /* Sample o/p
    1
    7
    */

    /* Program 17 */
    printf("Program 17 Started --------->\n");
    for(i=1; i < 16; i*=8)
        printf("i=%d\n", i);
    printf("Program 17 Ends ============================>\n");
    /* Sample o/p
    1
    8
    */

    /* Program 18 */
    printf("Program 18 Started --------->\n");
    for(i=1; i < 16; i*=9)
        printf("i=%d\n", i);
    printf("Program 18 Ends ============================>\n");
    /* Sample o/p
    1
    9
    */

    /* Program 19 */
    printf("Program 19 Started --------->\n");
    for(i=1; i < 16; i = i << 2)
        printf("i=%d\n", i);
    printf("Program 19 Ends ============================>\n");
    /* Sample o/p
    1
    4
    */

    /* Program 20 */
    printf("Program 20 Started --------->\n");
    for(i=1; i < 16; i = i << 3)
        printf("i=%d\n", i);
    printf("Program 20 Ends ============================>\n");
    /* Sample o/p
    1
    8
    */

    /* Program 21 */
    printf("Program 21 Started --------->\n");
    for(i=1; i < 16; i = i << 4)
        printf("i=%d\n", i);
    printf("Program 21 Ends ============================>\n");
    /* Sample o/p
    1
    */

    /* Program 22 */
    printf("Program 22 Started --------->\n");
    for(i=0; i <= 16; ++i)
        printf("i=%d\n", i);
    printf("Program 22 Ends ============================>\n");
    /* Sample o/p
    0
    1
    2
    upto 
    16
    */

    /* Program 23 */
    printf("Program 23 Started --------->\n");
    for(i=1; i <= 16; ++i)
        printf("i=%d\n", i);
    printf("Program 23 Ends ============================>\n");
    /* Sample o/ps
    1
    2
    upto 
    16
    */

    /* Program 24 */
    printf("Program 24 Started --------->\n");
    for(i=1; i <= 16; i*=2)
        printf("i=%d\n", i);
    printf("Program 24 Ends ============================>\n");
    /* Sample o/ps
    1
    2
    4
    8
    16
    */


    /* Program 25 */
    printf("Program 25 Started --------->\n");
    for(i=1; i <= 16; i=i<<2)
        printf("i=%d\n", i);
    printf("Program 25 Ends ============================>\n");
    /* Sample o/ps
    1
    4
    16
    */

    /* Program 26 */
    printf("Program 26 Started --------->\n");
    for(i = 5; i >= 0; i = i - 1)
        printf("i=%d\n", i);
    printf("Program 26 Ends ============================>\n");
    /* Sample o/ps
    5
    4
    3
    2
    1
    0
    */

    /* Program 27 */
    printf("Program 27 Started --------->\n");
    for(i = 5; i > 0; i = i - 1)
        printf("i=%d\n", i);
    printf("Program 27 Ends ============================>\n");
    /* Sample o/ps
    5
    4
    3
    2
    1
    */

    /* Program 28 */
    printf("Program 28 Started --------->\n");
    for(i = 5; i >= 1; i = i - 1)
        printf("i=%d\n", i);
    printf("Program 28 Ends ============================>\n");
    /* Sample o/ps
    5
    4
    3
    2
    1
    */

    /* Program 29 */
    printf("Program 29 Started --------->\n");
    for(i = 5; i > 1; i = i - 1)
        printf("i=%d\n", i);
    printf("Program 29 Ends ============================>\n");
    /* Sample o/ps
    5
    4
    3
    2
    */

    /* Program 30 */
    printf("Program 30 Started --------->\n");
    for(i = 16; i > 0; i = i - 2)
        printf("i=%d\n", i);
    printf("Program 30 Ends ============================>\n");
    /* Sample o/ps
    16
    14
    12
    upto
    2
    */

    /* Program 31 */
    printf("Program 31 Started --------->\n");
    for(i = 16; i > 1; i = i - 4)
        printf("i=%d\n", i);
    printf("Program 31 Ends ============================>\n");
    /* Sample o/ps
    16
    12
    8
    4
    */

    /* Program 32 */
    printf("Program 32 Started --------->\n");
    for(i = 16; i > 0; i = i - 4)
        printf("i=%d\n", i);
    printf("Program 32 Ends ============================>\n");
    /* Sample o/ps
    16
    12
    8
    4
    */

    /* Program 33 */
    printf("Program 33 Started --------->\n");
    for(i = 16; i >= 0; i = i - 4)
        printf("i=%d\n", i);
    printf("Program 33 Ends ============================>\n");
    /* Sample o/ps
    16
    12
    8
    4
    0
    */

    /* Program 34 */
    printf("Program 34 Started --------->\n");
    for(i = 16; i > 0; i = i / 4)
        printf("i=%d\n", i);
    printf("Program 34 Ends ============================>\n");
    /* Sample o/ps
    16
    4
    1
    */

    /* Program 35 */
    printf("Program 35 Started --------->\n");
    for(i = 16; i > 0; i = i / 2)
        printf("i=%d\n", i);
    printf("Program 35 Ends ============================>\n");
    /* Sample o/ps
    16
    8
    4
    2
    1
    */
    
    
    /* Program 36 */
    /*
    printf("Program 36 Started --------->\n");
    for(i = 16; i >= 0; i = i / 4)
        printf("i=%d\n", i);
        if(i == 0)
            break;
    printf("Program 36 Ends ============================>\n");
    */
    /* Sample o/ps
    16
    4
    1
    */
    

    /* Program 37 */
    /*
    printf("Program 37 Started --------->\n");
    for(i = 16; i > 0; i = i / 1)
        printf("i=%d\n", i);
    printf("Program 37 Ends ============================>\n");
    */
    /* Sample o/ps
    16
    4
    1
    */

    

    /* Program 38 */
    printf("Program 38 Started --------->\n");
    for(i = 16; i > 0; i = i >> 1)
        printf("i=%d\n", i);
    printf("Program 38 Ends ============================>\n");
    /* Sample o/ps
    16
    8
    4
    2
    */

    /* Program 39 */
    printf("Program 39 Started --------->\n");
    for(i = 16; i > 0; i = i >> 2)
        printf("i=%d\n", i);
    printf("Program 39 Ends ============================>\n");
    /* Sample o/ps
    16
    4
    1
    */

    /* Program 40 */
    printf("Program 40 Started --------->\n");
    for(i = 16; i > 0; i = i >> 3)
        printf("i=%d\n", i);
    printf("Program 40 Ends ============================>\n");
    /* Sample o/ps
    16
    2
    */


    exit(0);

}
