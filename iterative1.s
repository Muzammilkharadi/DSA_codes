#include <stdio.h>


void main()

{
    int array[5] = {2, 4, 6, 8, 10}; // initialize an array with 5 elements
    int i; // declare a variable to use as a counter

    printf("The array elements are:\n");
    for (i = 0; i < 5; i++)
    { // loop through the array elements using the counter variable
        printf("%d ", array[i]); // print out each array element
    }

}
