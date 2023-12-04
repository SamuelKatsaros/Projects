#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Introduction
    string name = get_string("\nHello! Before we begin, what is your name? ");
    printf("\nNice to meet you, %s!\nLet's continue...\n\n", name);

    // Gather data
    int x = get_int("To start, we'll need the x-value: ");
    int y = get_int("Great! Now, all we need is the y-value: ");

    // Analyze data & form response
    if (x < y)
    {
        printf("\nThanks, %s!\n\nAccording to my calculations....\nx is less than y.\n\n", name);
    }
    else if (x > y)
    {
        printf("\nThank you, %s!\n\nAccording to my calculations....\nx is greater than y.\n\n", name);
    }
    else
    {
        printf("\nAwesome, %s!\n\nAccording to my calculations....\nx is equal to y.\n\n", name);
    }

    //Anything else needed?
    char c = get_char("\nIs there another calculation I can help you with, %s?\n", name);

    //Human's response
    if (c == 'y' || c == 'Y')
    {
        printf("\nI'm here to help, %s.\n", name);
    }
    else if (c == 'n' || c == 'N')
    {
        printf("\nIt was my pleasure to help you today! Take care, %s\n\n", name);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("i love you\n");
    }
}
