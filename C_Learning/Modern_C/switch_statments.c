#include <stdio.h>
#include <stdlib.h>

/*Other than using ccase, we're also using the exit() function, which requires the above stdlib.h library*/

int main(void) {
    
    int choice;

    do 
    {
        printf("Just make a choice and be happy with it (1 to 4): ");
        scanf("%d", &choice);
        switch (choice)
        { case (1) : printf("You picked 1. Great.\n");
            break;

          case (2) : printf("You picked 2. Impressive.\n");
            break;
            
          case (3) : printf("You picked 3. Outstanding.\n");
            exit(42);

          case (4) : printf("You picked 4. Remarkable.\n");
            break;

          default : printf("I don't know the %d option.\n", choice);
                    printf("Please try again...\n");
                    break;
        }
    } while ((choice < 1) || (choice > 4));


}
