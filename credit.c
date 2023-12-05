#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for credit card number
    long cardNumber = get_long("Card Number: ");
    long originalCardNumber = cardNumber; // Preserve the original card number

    // Initialize variables for Luhn's algorithm
    int sum = 0;
    int digitCount = 0;
    int oddSum = 0;
    int evenSum = 0;

    // Extract each digit and apply Luhn's algorithm
    while (cardNumber > 0)
    {
        int digit = cardNumber % 10;

        if (digitCount % 2 == 0)
        {
            evenSum += digit;
        }
        else
        {
            int multiple = 2 * digit;
            oddSum += (multiple / 10) + (multiple % 10);
        }

        cardNumber /= 10;
        digitCount++;
    }

    sum = oddSum + evenSum;

    // Check if the card number is syntactically valid
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Calculate the divisor for extracting the first two digits
    long divisor = 1;
    for (int i = 0; i < digitCount - 2; i++)
    {
        divisor *= 10;
    }

    int firstTwoDigits = originalCardNumber / divisor;

    // Check for card type based on length and starting digits
    if ((digitCount == 13 || digitCount == 16) && firstTwoDigits / 10 == 4)
    {
        printf("VISA\n");
    }
    else if (digitCount == 15 && (firstTwoDigits == 34 || firstTwoDigits == 37))
    {
        printf("AMEX\n");
    }
    else if (digitCount == 16 && (firstTwoDigits > 50 && firstTwoDigits < 56))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
