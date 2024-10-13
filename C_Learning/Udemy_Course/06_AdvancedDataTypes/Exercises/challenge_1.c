
#include <stdio.h>

int sum(int my_array[], int element_quantity)
{
    int sum = 0;
    for (int i = 0; i < element_quantity; i++)
    {
        sum += my_array[i];
    }
    return sum;
}

void array_creator(int element_quantity, int my_array[])
{
    for (int i = 0; i < element_quantity; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &my_array[i]);
    }
}

int main(void)
{
    int element_quantity;

    printf("Number of elements in array: ");
    scanf("%d", &element_quantity);
    
    // Creating array
    int my_array[element_quantity];

    // Populating array
    array_creator(element_quantity, my_array);

    // Sum of array
    printf("Sum of array elements: %d\n", sum(my_array, element_quantity));

    return 0;
}

/*
Write program to read elements in array and find sum of array elements
Must use variable length array for the size of array
*/