/*
 * This program was done as a practice using arrays
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/12/2018
 * 
 */
#include <stdio.h>

int main(void) {
    //Here I establish the variable for the size of the array
    int size;

    //I ask the user for the size of the array
    printf ("How many numbers do you want to input? \n");
    scanf ("%i", &size);

    //I establish the array as having the size the user established
    int arr [size];

    //I ask the user for the characters that will be in the array
    for (int i=0; i < size; i++) {
        printf ("Element %i:", i+1);
        scanf ("%i", &arr[i]);
    }

    //Print the contents of the array
    printf ("The elements in the array are: \n");
    for (int i = 0; i < size; i++) {
        printf ("%i ", arr[i]);
    }
    printf ("\n");

    //Inversing the function of the loop that wrote the characters in the array, I print the numbers in the array, but in inverse order
    printf ("The elements in the array in reverse order are: \n");
    for (int i = size; i > 0; i--) {
        printf ("%i ", arr[i-1]);
    }
    printf ("\n");

    return 0;
}