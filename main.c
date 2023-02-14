/*
  UB C Programming Unit 1 Lesson 3 Program 2
  Seconds to Minutes and Seconds
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  int seconds, minutes, remainder; //initialize variable as integer

  printf("This program allows you to enter an amount of seconds and the program will convert them to minutes. You will get one prompt:\n\t- Seconds: Please enter your seconds here\n"); //instructions
  
  printf("Seconds: "); //ask user for input
  scanf("%d", &seconds); //accept input and format as float

  minutes = seconds/60; //convert seconds to minutes
  remainder = seconds%60; //find the remaining seconds

  //print output:
  printf("%d seconds is equal to %d minutes and %d seconds.", seconds, minutes, remainder);
  
  return 0;
}