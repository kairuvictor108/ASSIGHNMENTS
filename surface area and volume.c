/*
name:NJOKI VICTOR KAIRU
REG NO:CT100/G/26187/25
description:VOLUME AND SURFACE AREA OF A CYLINDER
*/

#include <stdio.h>

int main() {
	float pi=3.142,radius,height,volume,surface_area;
	
	printf("enter the radius(in cm):");
	scanf("%f", &radius);
	
	printf("\nenter height(in cm):");
	scanf("%f", &height);
	
	volume=pi*radius*radius*height;
	surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
	
	printf("\n volume is %.2f",volume);
	printf("\n surface_area is %.2f", surface_area);
	
	return 0;
}