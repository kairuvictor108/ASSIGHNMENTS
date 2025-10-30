/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:1D ARRAY
*/

#include <stdio.h>

int main()
{
	int i,j;
	int sum=0;
	
	int occupancy[5][10]={
		{0,1,1,0,1,1,0,1,0,0},
		{1,0,0,1,1,0,1,0,0,1},
		{0,1,1,0,1,0,1,1,0,1},
		{1,0,1,1,1,0,0,1,1,1},
		{1,0,0,1,1,1,0,1,1,0}
	};
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			printf("%d\t", occupancy[i][j]);
		}
		printf("\n");
		sum=sum+occupancy[i][j];
	}
	printf("the total number of occupied houses is %d", sum);
	
	
	return 0;
}