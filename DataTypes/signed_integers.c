/*
    Auther  : Ajinkya Khare
    Goal    : Display different signed interger data type and its sizes  
*/

#include <stdio.h>
#include <stdlib.h>

//void exit(int);
//int printf(char*, ...);

char signed_char1 = 'a';
char signed_char2 = 66;
short int signed_short = 100;
int signed_int = 200;
long int signed_longint = 400;
long long int signed_longlongint = 800;

int main(void)
{
    // Use %..d as a format specifier  --> for signed variables

    printf("\nsigned_char1 as character = %c",signed_char1);
    printf("\nsize of signed char = %d",sizeof(signed_char1));
    printf("\nsigned_char2 as character = %c",signed_char2);
    printf("\nsize of signed char = %d",sizeof(signed_char2));

    printf("\nsigned_char1 as interger = %hhd",signed_char1);
    printf("\nsize of signed char = %d",sizeof(signed_char1));
    printf("\nsigned_char2 as interger = %hhd",signed_char2);
    printf("\nsize of signed char = %d",sizeof(signed_char2));

    printf("\nsigned_short as interger = %hd",signed_short);
    printf("\nsize of signed short int = %d", sizeof(signed_short));

    printf("\nsigned_int as integer = %d",signed_int);
    printf("\nsize of signed int = %d",sizeof(signed_int));

    printf("\nsigned_longint as integer = %ld",signed_longint);
    printf("\nsize of signed long int = %d",sizeof(signed_longint));

    printf("\nsigned_longlongint as integer = %lld",signed_longlongint);
    printf("\nsize of signed long long int = %d",sizeof(signed_longlongint));
    
    exit(0);    

}
