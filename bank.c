/*
NAME: OKOTH LENOX OTIENO
REG NO: PS106/G/28809/25
DESCRIPTION: PROMPTING THE USER TO ENTER AGE AND THE ANNUAL SALARY TO SEE IF ELLIGIBLE FOR LOAN

*/
#include<stdio.h> //oreprocessor directives
int main (){//main fuction
    int age , income;// declaring variable

    printf("How old are you?");// prompting the user to enter their age
    scanf("%d", &age);

    printf("Please enter your anual income:");//prompting the user to enter to enter their annual income
    scanf("%d",&income);

    if (age>=21, income >= 21000){
        printf("Congratulation you qualify for a loan.\n");//output if he meet the qualification

    }
    else{
        printf("sorry you are not elligible for the loan");//whwn he fails to meet the expected requirements

    }
  return 0;

    }
