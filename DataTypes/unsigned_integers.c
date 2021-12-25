/*
    Auther  : Ajinkya Khare
    Goal    : Display different unsigned interger data type and its sizes
*/

#include <stdio.h>
#include <stdlib.h>

//void exit(int);
//int printf(char*, ...);

unsigned char unsigned_char1 = 'a';
unsigned char unsigned_char2 = 66;
unsigned short int unsigned_short = 100;
unsigned int unsigned_int = 200;
unsigned long int unsigned_longint = 400;
unsigned long long int unsigned_longlongint = 800;

int main(void)
{
    // Use %..u as a format specifier  --> for unsigned variables

    printf("\nunsigned_char1 as character = %c",unsigned_char1);
    printf("\nsize of unsigned char = %d",sizeof(unsigned_char1));
    printf("\nunsigned_char2 as character = %c",unsigned_char2);
    printf("\nsize of unsigned char = %d",sizeof(unsigned_char2));

    printf("\nunsigned_char1 as interger = %hhu",unsigned_char1);
    printf("\nsize of unsigned char = %d",sizeof(unsigned_char1));
    printf("\nunsigned_char2 as interger = %hhu",unsigned_char2);
    printf("\nsize of unsigned char = %d",sizeof(unsigned_char2));

    printf("\nunsigned_short as interger = %hu",unsigned_short);
    printf("\nsize of unsigned short int = %d", sizeof(unsigned_short));

    printf("\nunsigned_int as integer = %u",unsigned_int);
    printf("\nsize of unsigned int = %d",sizeof(unsigned_int));

    printf("\nunsigned_longint as integer = %lu",unsigned_longint);
    printf("\nsize of unsigned long int = %d",sizeof(unsigned_longint));

    printf("\nunsigned_longlongint as integer = %llu",unsigned_longlongint);
    printf("\nsize of unsigned long long int = %d",sizeof(unsigned_longlongint));
    
    exit(0);    

}
