/*
  UB C Programming Unit 1 Lesson 3 Program 2
  Seconds to Minutes and Seconds
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float seconds, minutes; //intialize variable as float

  printf("This program allows you to enter an amount of seconds and the program will convert them to minutes. You will get one prompt:\n\t- Seconds: Please enter your seconds here\n"); //instructions
  
  printf("Seconds: "); //ask user for input
  scanf("%f", &seconds); //accept input and format as float

  minutes = seconds/60; //convert seconds to minutes

  //print output:
  printf("%0.3f seconds is equal to %0.3f minutes.", seconds, minutes);
  
  return 0;
}