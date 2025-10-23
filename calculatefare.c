/*
NAME : OKOTHLENOX OTIENO
REG NO: PA106/G/28809/25
DESCRIPTION : CREATING C FUNCTION THAT CALCULATE  FARE ACCORDING TO THE DISTANCE COVERED
*/

#include<stdio.h>

int calculateFare(int distance){
int fare;

 fare =distance*50;
 return fare;}

 void main(){
     int distance;
     int totalfare;
     printf("Enter the distance travelled: ");
     scanf("%d",&distance);

      totalfare = calculateFare(distance);

     printf(" The total fare is %d", totalfare);


 }


