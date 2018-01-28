#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float input;
    int coins = 0;

    do
    {
        input = get_float("Change owed: ");
    }
    while (input <= 0);

    int amount_in_cents = (int)round(input * 100);

    coins = amount_in_cents / 25;
    amount_in_cents = amount_in_cents % 25;

    coins += amount_in_cents / 10;
    amount_in_cents = amount_in_cents % 10;

    coins += amount_in_cents / 5;
    amount_in_cents = amount_in_cents % 5;

    coins += amount_in_cents;

    printf("%d\n", coins);

}