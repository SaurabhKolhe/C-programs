/*Datatypes in c
Each variable in c is assosiated with datatype.Each datatype has fix size.
1.char (Character):It is use to store characters or alphabets.
                   It required size 1 byte to store single character.
2.int  (Integer) : It is store integer values in memory.
                   It take 2 bytes of memeory.
3.float          : It is use to store decimal value with single precision.
                   It required 4 bytes of memory to store data.
4.Double         : It used to store decimal value with Double precision.
                   It required 8 bytes of memory.
Other datatypes :short int,unsigned short int,Unsigned int,long int,unsigned char,long double,etc.
*/
#include<stdio.h>
void main()
{

char a="Saurabh"; //Always write character in " " or ' '. 
int b=10;
float c=10.23;
double d=10.2345;

prinf("%c",a);  //Use %c (format specifier) to print character(char).
printf("%d",b);  //Use %d (format specifier) to print Integer(int).
printf("%f",c);  //Use %f (format specifier) to print float.
printf("%lf",d);  //Use %lf (format specifier) to print double.

}
