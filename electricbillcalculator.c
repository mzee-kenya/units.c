/*
NAME : OKOTH LENOX OTIENO
PA:106/G/28809/2025
DESCRIPTION:C FUNCTION THA CALCULATE NUMBER OF UNITS
*/
#include<stdio.h>

int CalculateElectricBill(int units){
int billpaid;
if (units <= 100){
    billpaid=(units*10);
}
else if(units >100 && units <=200){
billpaid=1000+(units-100)*15;
}
else {
    billpaid=2500+(units-200)*15;

}
return billpaid;

}

void main(){
int units ;
int bill;

printf("please enter units you consumed:");
scanf("%d", &units);
bill = CalculateElectricBill(units);
printf("the total bill is:%d",bill);

}
