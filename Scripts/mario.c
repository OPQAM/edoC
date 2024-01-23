#include <cs50.h>
#include <stdio.h>

void number_of_bang(int value);
void empty_spaces(int spaced);

int main()
{
    int userReply;
    do
    {
        int counter = 1;
        printf("Mario's Pyramid.\n");
        userReply = get_int("Give us the number of steps (1 to 8): ");
        if (userReply >= 1 && userReply <= 8)
        {
            for (int i = 1; i <= userReply; i++)
            {
                empty_spaces(userReply - counter);
                counter++;
                number_of_bang(i);
                printf("  ");
                number_of_bang(i);
                printf("\n");
            }
        }
    }
    while (userReply > 8 || userReply < 1);
}
void number_of_bang(int value)
{
    for (int i = 0; i < value; i++)
    {
        printf("#");
    }
}
void empty_spaces(int spaced)
{
    for (int i = 0; i < spaced; i++)
    {
        printf(" ");
    }
}
