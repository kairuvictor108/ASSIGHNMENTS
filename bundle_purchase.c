/*
NAME:NJOKI VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:BUNDLE_PURCHASE 
*/

#include <stdio.h>

int main(){
	int choise;
	
	printf("option|bundle|cost");
	printf("\n1	100MB  50");
	printf("\n2	500MB  200");
	printf("\n3	1GB    350");
	printf("\n4	2GB    600");
	
	printf("\nenter your choise(1-4):");
	scanf("%d", &choise);
	
	if(choise==1){
		printf("you selected 100MB .cost is 50 KES");
	}
	else if(choise==2){
		printf("you selected 500MB .cost is 200 KES");
	}
	else if(choise==3){
		printf("you selected 1GB .cost is 350 KES");
	}
	else if(choise==4){
		printf("you selected 1GB .cost is 600 KES");
	}
	else{
	printf("invalid choise!");	
	}
	
	return 0;
}