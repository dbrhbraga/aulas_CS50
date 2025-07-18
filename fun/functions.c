#include <cs50.h>
#include <stdio.h>

//declaration
int add_reals(int a, int b);

int main(void)
{
    // get numbers
    printf("number: ");
    int x = get_int("");

    printf("number: ");
    int y = get_int("");

    // mult the two numbers
    int z = add_reals (x, y);

    // output
    printf("The sum of %i and %i is %i!\n", x, y, z);
}
int add_reals(int a, int b)
{
    int sum = a + b;
    return sum;
}
