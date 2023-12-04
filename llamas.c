#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompting the user for a starting # of llamas
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9); // Lab states cannot start < 9, population will fail.

    // Prompting them for an ending # of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start); // Can't have less than we start with

    // How many years will it take to get to the goal?
    int years = 0;
    while (start < end)
    {
        start = start + (start / 3);
        start = start + (start / 4);
        years ++;
    }

    printf("Years: %i\n", years); // Ultimately, we're adding 1/12 llamas a year (add 1/3 subtract 1/3)

    // Every year, 1/3 of or current llamas are born, 1/4 pass away.
}
