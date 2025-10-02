/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:EXAM_ELIGIBILITY
*/

#include <stdio.h>

int main(){
	
	int attendance,marks;
	
	printf("enter your avarage marks:");
	scanf("%d", &marks);
	
	printf("enter your attendance(0-100):");
	scanf("%d", &attendance);
	
	if(attendance>=75 &marks>=40){
		printf("you are eligible for the final exams");
	}
	else
	{
		printf("not eligible.");
	}
	
	return 0;
}