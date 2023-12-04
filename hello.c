#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What's your first name? ");
    string middle = get_string("What's your middle name? ");
    string last = get_string("What's your last name? ");
    string age = get_string("What's your age? ");
    string college = get_string("What's your current institution? ");
    string major = get_string("What's your current or desired major? " );
    string highest = get_string("What's your highest level of education you intend to receive? ");
    string hometown = get_string("What's your hometown? ");
    {
    printf("Welcome to the applicant portal, %s!\n Candidate: %s %s %s, %s\n Currently Attends: %s\n Major: %s\n Highest Level of Education: %s\n Hometown: %s\n", first, first, middle, last, age, college, major, highest, hometown);
    }
}
