/* Challenge:
 * input any number from a user
 * check whether the nth bit of the given number is set (1) or not
 * set the nth bit to 1*/


#include <stdio.h>


int bit_converter(int bit_checked);
int number_checker(int bit_checked, int user_number, int test_number);


int main(void) {
    int user_number, bit_checked;
    

    printf("Enter any positive number: ");
    scanf("%d", &user_number);

    printf("Enter nth bit to check (right to left, 0-31): ");
    scanf("%d", &bit_checked);

    int test_number = bit_converter(bit_checked);

    printf("\nNumber before setting %d bit: %d (decimal).\n", bit_checked, user_number);
    printf("\nNumber after setting %d bit: %d (decimal).\n", bit_checked, number_checker(bit_checked, user_number, test_number));

    return 0;

}    

int bit_converter(int bit_checked) {
    int test_number = 1;


    if (bit_checked == 0) {
        test_number = 1; 
    } else {
        for (int i = 1; i <= bit_checked; i++) {
        test_number *= 2;
        }
    }    
    return test_number;
}


int number_checker(int bit_checked, int user_number, int test_number) {
    int final_value = 0;
    

    if ((user_number & test_number) == test_number) {
        printf("The %d bit is already set to 1... nothing changed.\n", bit_checked);
        final_value = user_number;
    } else {
        printf("The %d bit is set to 0. Switching it...\n", bit_checked);
        // Switching 0 to 1 on position bit_checked
        final_value = (user_number | test_number);
        printf("Bit set successfully!\n");
    }


    return final_value;
}
