/*
NAME: OKOTH LENOX OTIENO
REG NO: PA106/G/28809/25
DESCRIPTION: C FUNCTION THAT CONVERTS FAHRENHEIT TO CELCIUS
*/
#include<stdio.h>
float convertToCelcius(float fahrenheit){//function to convert fahrenheit to celcius
    float celcius;
    celcius =(fahrenheit - 32)*5/9;//formula to convert
    return celcius;
}
void main(){//main function
    float fahrenheit;
    float celcius;
    printf("Enter temperature in Fahrenheit: ");//prompt user to enter temperature in fahrenheit
    scanf("%f",&fahrenheit);
    celcius = convertToCelcius(fahrenheit);
    printf("Temperature in Celcius: %.2f\n",celcius);//display temperature in celcius

}