//
// Tomado de https://www.geeksforgeeks.org/insertion-sort/
//
#include <iostream>
#include "InsertionSort.h"

void InsertionSort::insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        std::cout << arr[i] << " ";
        std::cout << std::endl;
}

}
