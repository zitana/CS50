#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int size;
    do
    {
        size = get_int("Please enter an integer between 0 and 23: ");
    }
    while (size < 0 || size > 23);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}

