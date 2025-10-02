/*
NAME:NJOKI VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:WATER BILL CALCULATOR
*/

#include <stdio.h>

int main(){
	int units;
	float bill;
	
	printf("enter number of units you have consumed:");
	scanf("%d", &units);
	
	if(units>=1 &units<=30){
		bill=units*20;
	}
	else if(units>=31 &units<=60){
		bill=units*25;
	}
	else if(units>=61){
		bill=units*30;
	}
	
	printf("Your bill is Ksh:%.2f",bill);
	
	return 0;
}