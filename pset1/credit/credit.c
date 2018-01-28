#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long int cc_number;
    do
    {
        cc_number = get_long_long("Number: ");
    }
    while (cc_number < 0);

    long long int sum_of_digits = 0;
    int doubled_digit;

    for (int i = cc_number; i > 0; i /= 100)
    {
        doubled_digit = i % 100 / 10 * 2;
        if (doubled_digit < 10)
        {
            sum_of_digits += doubled_digit;
        }
        else
        {
            sum_of_digits += doubled_digit % 10 + doubled_digit / 10;
        }
    }
    // printf("Sum of 2nd digits multiplied by 2: %lld\n", sum_of_digits);
    for (int j = cc_number; j > 0; j /= 100)
    {
        sum_of_digits += j % 10;
    }
    // printf("Add sum of other digits: %lld\n", sum_of_digits);
    if (sum_of_digits % 10 == 0)
    {
        if ( (cc_number >= 340000000000000 && cc_number < 350000000000000) ||
             (cc_number >= 370000000000000 && cc_number < 380000000000000) )
        {
            printf("AMEX\n");
        }
        else if ( cc_number >= 5100000000000000 && cc_number < 5600000000000000 )
        {
            printf("MASTERCARD\n");
        }
        else if ( (cc_number >= 4000000000000 && cc_number < 5000000000000) ||
                  (cc_number >= 4000000000000000 && cc_number < 5000000000000000) )
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}