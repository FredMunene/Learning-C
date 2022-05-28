#include <stdio.h>

//variable 
int main(){

    int x;// declaration
    x = 123; //initialization
    int y = 321; //declaration + initialization (%d- format specifier)
    float gpa = 2.05; //floating point number (%f- format specifier)
    char grade = 'C'; //single character (%c- format specifier)
    int age = 15 ; // (%d - format specifier))
    char name[] = "Bro"; //array of characters (%s- format specifier)

    printf("Hello %s!\n", name);
    printf("You are %d years old.\n",age);
    printf("Your average grade is %c.\n", grade);


return 0;
}