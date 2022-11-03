#include <stdio.h>
#include <stdbool.h>
int main() //int is a keyword, main is a variable of type integer
{
    /*
    escape sequence = character combination consisting of backlash \ followed by a letter or combination of
                      digits. They specify actions within a line or string or text.
                      \n = newline
                      \t = tab
    */
printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
printf("\n\"I like pizza.\" - Abraham Lincoln probably\n");

    /*
    variable = Allocated space in memory to store a value.
               We refer to variable's name to access the stored value.
               That variable now behaves as if it was the value it contains.
               BUT we need to declare what type of data we are storing.
    */
int x;       //declaration
x = 123;     //initialization
int y = 321; //declaration + initialization

int age = 21;            //integer
float gpa = 2.05;        //floating point number
char grade = 'C';        //single character
char name[] = "Bro";     //array of characters
printf("Hello %s\n", name);                    // %s for string
printf("You are %d years old\n", age);         // %d for decimal
printf("Your average grade is %c\n", grade);   // %c for character
printf("Your gpa is %f\n", gpa);               // %f for float

char a = 'C';                                    //single character %c
char b[] = "Bro";                                //array of characters %s
float c = 3.141592;                              //4 bytes (32 bits of precision) 6-7 digits %f
double d = 3.141592653589793;                    //8 bytes (64 bits of precision) 15-16 digits %lf
bool e = true;                                   //1 byte (true or false) %d
char f = 120;                                    //1 byte (-128 to +127) %d or %c
unsigned char g = 255;                           //1 byte (0 to 255) %d or %c
short h = 32767;                                 //2 bytes (-32768 to +32767) %d
unsigned short i = 65535;                        //2 bytes (0 to 65535) %d
int j = 2147483647;                              //4 bytes (-2147483648 to +2147483647)
unsigned int k = 4294967295;                     //4 bytes (0 to 4294967295) %u
long long int l = 9223372036854775807;           //8 bytes (-9 quintillion to +9 quintillion) %lld
unsigned long long int m = 18446744073709551615U;//8 bytes (0 to +18 quintillion) %llu
printf("char is: %c\n", a);
printf("character array is: %s\n", b);
printf("float is: %f\n", c);
printf("double is: %lf\n", d);
printf("bool is: %d\n", e);
printf("char as numeric value is: %d\n", f);
printf("unsigned char as numeric value %d\n", g);
printf("short is: %d\n", h);
printf("unsigned short is: %d\n", i);
printf("int is: %d\n", j);
printf("unsigned int: %d\n", k);
printf("long long int is: %d\n", l);
printf("unsigned long long int is: %d\n", m);

    return 0;
}