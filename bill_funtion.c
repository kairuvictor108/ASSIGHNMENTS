/*
NAME:VICTOR KAIRU
REG NO:CT100/G/26187/25
DESCRIPTION:CALCULATE ELECTRIC BILL FUNTION
*/

#include <stdio.h>

double calculateElectricBill(int units) {
    double totalBill = 0.0;
    if (units <= 100) {
        totalBill = units * 10.0;
    } else if (units <= 200) {
        totalBill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        totalBill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }
    return totalBill;
}

int main() {
    int unitsConsumed;
    printf("Enter the number of units consumed: ");
    scanf("%d", &unitsConsumed);

    double bill = calculateElectricBill(unitsConsumed);
    printf("The total bill for %d units is KSh. %.2f\n", unitsConsumed, bill);
    return 0;
}

