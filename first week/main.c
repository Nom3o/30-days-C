#include <stdio.h>
#include <stdbool.h>


int main(){
    printf("hello\n");
    printf("i am iron man\n");
    


 // VARIABLES 
 // intigers the %d is format specifier it is called %decimal

 int age  = 25;
 printf("i am %d years old!\n" , age);

///////////////////////////////////////////////////////

// store FLOAT numbers 
// we use %f as %float  
// float is capable of only 67 digits after the decimal
float gpa = 3.5;
float price = 29.5;
printf("Your GPA is %f\n" , gpa);
printf("The price is %.1f\n", price); // the %.1f excludes the zeros after .5 

// float is capable of only 67 digits after the decimal so if we want to work on a longer decimals like Pi we use DOUBLES

///////////////////////////////////////////////////////////////

// double

double pi = 3.148394389378;
printf("The value of pi is %lf \n" , pi); // %lf means long_float 

//  the out put will be "The value of pi is 3.148394" only 6 diits after the decimal if we want to print more digits after the decimal we use %.13lf the number 13 can be replaced by the number of digits we want to print after the decimal

printf("The value of pi is %.15lf \n" , pi);

/////////////////////////////////////////////////////////////

//character (char)

char currency  = '$';
char grade = 'A';
printf("the currency is in %c \n", currency);
printf("Your grade is %c \n" , grade);

////////////////////////////////////////////////////////

// In C language we don't have strings to store like " Ethiopia" or something in stead we use inside an array to store more than one characters []


 char name[] = "Ethiopia";
 char food[]="Pasta";
 char email[] = "test123@gmail.com";
 printf("I am from %s\n" , name);  // %s is for %string
 printf("Your favorite food is %s\n" , food);
 printf("Your Email is %s\n" , email);

////////////////////////////////////////////////////////////////////


/* 

               boolians (bool)

-> to use boolians we must add a library called <stdbool.h> at the header of our C
-> bool is True or False  (1 or 0)

*/

bool isGirl = false;
bool pass = true;
printf("%d\n", isGirl); // the out put will be 0 which means false.

if(isGirl){
    printf("Not a Girl\n");
}
else{
    printf("He is a boy\n");
}
if (pass){
    printf("congrats\n");
}
else{
    printf("try again\n");
}









    return 0;
}

