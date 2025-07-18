#include <cs50.h>
#include <stdio.h>

int main(void)
{
// ask for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed, in cents: ");
    }
    while (cents < 0);

//  quarters
    int quarters = cents / 25;
    cents = cents % 25;

//  dimes
    int dimes = cents / 10;
    cents = cents % 10;

//  nickels
    int nickels = cents / 5;
    cents = cents % 5;

//  pennies
    int pennies = cents;

//  The result
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);
}


int = int_quarters = 0.25
int = int_dimes = 0.10
int = int_nickels = 0.05
int = int_pennies = 0.01
