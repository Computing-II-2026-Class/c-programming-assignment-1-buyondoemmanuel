/* Name: BUYONDO EMMANUEL*/
/* Student Number: 24/U/BIO/04517/PD */

#include <stdio.h>

int main(void)
{

    float distance_travelled, fuel_consumed, fuel_efficiency;
    printf("Enter the distance_traveled in kilometers:.\n ");
    scanf("%f", &distance_travelled);
    printf("Enter the amount of fuel_consumed in liters: ");
    scanf("%f", &fuel_consumed);
    fuel_efficiency = distance_travelled/ fuel_consumed;
    printf("Your fuel_efficiency is: %.2f km/l", fuel_efficiency);
    return 0;
}
