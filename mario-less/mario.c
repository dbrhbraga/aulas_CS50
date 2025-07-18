#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height = get_int("The height of the pyramid: ");


    for (int i = 1; i <= height; i++)
    {

        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }


        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}

    ou

print('#' * 5)
