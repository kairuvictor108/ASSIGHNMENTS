/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:CALCULATE FARE
*/

#include <stdio.h>

double calculateFare(double distance_km) {
    double fareRate = 50.0;
    double totalFare = distance_km * fareRate;
    return totalFare;
}

int main() {
    double distance;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%lf", &distance);

    double fare = calculateFare(distance);
    printf("The total fare for %.2f km is KSh. %.2f\n", distance, fare);
    return 0;
}



