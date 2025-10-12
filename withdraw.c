/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:ATM WITHDRAWAL
DATE:11/10/2025
*/
#include <stdio.h>

int main()
{
	int balance=1000;
	int amt;
	
	printf("your balance is %d", balance);
	
	while(balance>0){
		printf("\n enter amount to withdaw:");
		scanf("%d", &amt);
	
		if(amt<=balance)
		{
			balance -= amt;
			printf("\n balance is, %d", balance);	
		}
		else
		{
			printf("insufficient balance!\n");
		}
	}
	
	return 0;
}