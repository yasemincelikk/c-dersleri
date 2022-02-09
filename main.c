//Veri tipleri ve de�i�kenleri tan�mak ama�l� �al���lm��t�r.
#include <stdio.h> 
#include <stdlib.h>
unsigned char  a; //1 byte
unsigned short b; //2 byte
unsigned int   c; //4 byte
unsigned long  d; //4 byte
float e; //4 byte
double f; //8 byte
unsigned long long g; //8 byte
char buf[11];
int main()
{
    printf("char = %d\n" , sizeof( a ) );
    printf("short = %d\n" , sizeof( b ) );
    printf("int = %d\n" , sizeof( c ) );
    printf("long = %d\n" , sizeof( d ) );
    printf("float = %d\n" , sizeof( e ) );
    printf("double = %d\n" , sizeof( f ) );
    printf("long long = %d\n" , sizeof( g ) );
    buf[0] = 0x41; 
    buf[1] = 66;
    buf[2] = 67;
    buf[3] = 68;
    buf[4] = 69;
    buf[5] = 70;
    buf[6] = 71;
    buf[7] = 72;
    buf[8] = 73;
    buf[9] = 0; 
    
    a = 73;
    e = 3.18;
    printf("a = %c\n" , a  ); // ASCII 
    printf("a = %d\n" , a  ); // Tamsay�
    printf("a = %.2f\n" , e ); // Noktal� Say�
    printf("Dizi Verisi = %s\n" , buf ); //String 
    return 0;
}
