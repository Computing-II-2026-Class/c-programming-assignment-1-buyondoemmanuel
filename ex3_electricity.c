/*Name:BUYONDO EMMANUEL*/
/*Student Number:24/U/BIO/O4517/PD*/
#include <stdio.h>
int main () {
    float unitsConsumed, costPerunit, totalElectricityBill;
    // Prompt the user for the units consumed and the cost per unit


    printf("Enter the unitsConsumed:\n");
    scanf("%f", &unitsConsumed);
    printf("Enter the costPerUnit:\n");
    scanf("%f", &costPerunit);

    // Calculate the total electricity bill

    totalElectricityBill = unitsConsumed * costPerunit;

    // Display the total electricity bill

    printf("The totalElectricityBill is: %.2f UGX\n", totalElectricityBill);
    printf("..........ElectricityBillDetails..........\n");
    printf("The unitsConsumed are: %.2f\n", unitsConsumed);
    printf("The costPerUnit is: %.2f UGX\n", costPerunit);
    printf("\nThank you for using our service!");


    return 0;

}
