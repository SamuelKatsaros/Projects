#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int rows = 0; rows < height; rows++)
    {
        for (int left_spaces = 0; left_spaces < height - rows - 1; left_spaces++)
        {
            printf(" ");
        }
        for (int left_hashes = 0; left_hashes <= rows; left_hashes++)
        {
            printf("#");
        }
        printf("  ");
        for (int right_hashes = 0; right_hashes <= rows; right_hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
