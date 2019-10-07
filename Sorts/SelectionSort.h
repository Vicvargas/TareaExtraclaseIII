//
// Created by josecespedes on 29/9/19.
//

#ifndef TAREAEXTRACLASE3_SELECTIONSORT_H
#define TAREAEXTRACLASE3_SELECTIONSORT_H

/**
 * Declaración de la clase SelectionSort.
 * Tomado de: https://www.geeksforgeeks.org/selection-sort/
 */

class SelectionSort {

public:
    /**
     * Realiza intercambio entre ambos valores
     * @param xp
     * @param yp
     */
    void swap(int *xp, int *yp);
    /**
     * Realiza ordenamiento del array
     * @param arr
     * @param n
     */
    void selectionSort(int arr[], int n);
};


#endif //TAREAEXTRACLASE3_SELECTIONSORT_H
