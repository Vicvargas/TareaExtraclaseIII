//
// Created by josecespedes on 29/9/19.
//

#include "SelectionSort.h"

void SelectionSort::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort::selectionSort(int *arr, int n) {
    int min_idx;
    for(int i = 0; i<n-1;i++){
        min_idx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}