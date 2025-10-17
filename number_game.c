/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:NUMBER_GAME
*/

#include <stdio.h>

int main()
{
	int i,number;
	int count=0;
	
	i=3;
	printf("guess a number from 1-20.\n");
	
	
	do{
		count++;
		printf("enter your guess:");
		scanf("%d", &number);
	
		if(number==i)
		{
		printf("congratulations!!!\n");	
		}
		else if(number<i)
		{
		printf("too low!!\n");	
		}
		else if(number>i)
		{
		printf("too high!\n");	
		}
		
	}
	
	while(i!=number);{
		printf("number of attempts is, %d", count);
	}
	
	return 0;
}