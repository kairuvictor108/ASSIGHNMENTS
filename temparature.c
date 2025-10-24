/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:
*/

#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * (5.0 / 9.0);
    return celsius;
}

int main() {
    double fahrenheitTemp;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheitTemp);

    double celsiusTemp = convertToCelsius(fahrenheitTemp);
    printf("%.1f°F is approximately %.1f°C\n", fahrenheitTemp, celsiusTemp);
    return 0;
}
