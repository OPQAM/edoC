#include <stdio.h>
#include <cs50.h>

int pyramid_height(void);
void pyramid_creator(int height);

int main(void)
{
    int user_height;

    printf("Welcome to Mario's Tower!\n\n");
    user_height = pyramid_height();
    pyramid_creator(user_height);
    printf("\n");
}

void pyramid_creator(int height)
{
    for (int floor = height; floor > 0; floor--)
        {
            int block_set = 2;
            int voids = floor -1;
            int blocks = height - voids;
            int temp_blocks = blocks;
            printf("\n");

            for (int width = 0; width < (2 * height); width++)
            {
                if (voids > 0)
                {
                    printf(" ");
                    voids--;
                }
                else if (block_set == 2)
                    {
                        printf("#");
                        temp_blocks--;
                        if (temp_blocks == 0)
                        {
                            printf("  ");
                            block_set--;
                            temp_blocks = blocks;
                        }
                    }
                else if (block_set == 1)
                {
                    printf("#");
                    temp_blocks--;
                    if (temp_blocks == 0)
                    {
                        block_set--;
                    }
                }
                else
                {
                    printf(" ");
                }
            }
        }
}

int pyramid_height(void)
{
    int size;

    do
    {
        size = get_int("Pyramid Size (1-8)? ");
    }
    while (size <= 0 || size > 8);

    return size;
}
