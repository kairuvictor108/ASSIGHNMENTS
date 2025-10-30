/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:1D ARRAY
*/

#include <stdio.h>

int main(){
	
	int j;
	int sum=0;
	float avg;
	
	int revenue[7]={};
	
	for(j=0;j<6;j++){
		printf("enter todays revenue:\n", revenue[j]);
		scanf("%d", &revenue);
	}
	
	printf("revenue per day(from mon to sun respectively\n");
for(j=0;j<8;j++){
	printf("%d\t", revenue[j]);
	sum=sum+revenue[j];
}
	avg=sum/7;
	
	printf("\n the total weekly revenue is ksh %d",sum);
	printf("\n avarage weekly revenue is ksh %.2f", avg);
	
	return 0;
}