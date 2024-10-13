#include <stdio.h>
#include <string.h>
#include <unistd.h>   /* sleep() and exec() */


#define PASSWORD "mypass123"
#define LEVEL "1"
#define NEXT_LEVEL "level_02" 

int main(int argc, char *argv[]) {

    char input[20];
    printf("Please enter password: ");
    scanf("%19s", input);

    if (strcmp(input, PASSWORD) == 0) {
        printf("Level %s passed!\n", LEVEL);
        sleep(5); /* Wait 5 */

        /* Jump into next level */
        execl("./" NEXT_LEVEL, NEXT_LEVEL, NULL);

        /* In case the jump fails */
        perror("Failed to load " NEXT_LEVEL);
        return 1;

    } else {
        printf("Game Over\n");
        return 1;
    }

    return 2;
}















