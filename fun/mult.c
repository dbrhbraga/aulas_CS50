#include <cs50.h>
#include <stdio.h>

//declaration
int mult_reals(int a, int b);

int main(void)
{
    // get numbers
    printf("number: ");
    int x = get_int("");

    printf("number: ");
    int y = get_int("");

    // mult the two numbers
    int z = mult_reals (x, y);

    // output
    printf("The mult of %i and %i is %i!\n", x, y, z);
}
int mult_reals(int a, int b)
{
    int mult = a * b;
    return mult;
}

