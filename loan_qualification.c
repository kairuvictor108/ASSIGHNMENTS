/*
NAME:
REG NO:
DESCRIPTION:BANK LOAN QUALIFICATIN PROGRAM
*/

#include <stdio.h>

int main(){
	int age,income;
	
	printf("enter your age:");
	scanf("%d", &age);
	
	printf("\nenter your annual income(in Ksh):");
	scanf("%d", &income);
	
	if(age>=21 &&income>=21000){
		printf("congratulatoins,you qualify for the loan.");
	}
	else{
		printf("unfortunately,we are unable to offer you a loan at this time!");
	}
	
	return 0;
}