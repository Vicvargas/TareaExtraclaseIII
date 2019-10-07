//
// Created by josecespedes on 29/9/19.
//

#include "Benchmark.h"

Benchmark::Benchmark() {

    //Definiendo los algoritmos de ordenamiento
    SelectionSort selectionSort;
    InsertionSort insertionSort;

    //Definiendo los distintos arrays
    int selection10[10];
    int insertion10[10];
    int bubble10[10];

    int selection100[100];
    int insertion100[100];
    int bubble100[100];

    int selection1000[1000];
    int insertion1000[1000];
    int bubble1000[1000];

    int selection10000[10000];
    int insertion10000[10000];
    int bubble10000[10000];


    //Rellenando los arrays de 10 espacios
    for (int i = 0; i < 10; i++) {
        int random = rand() % 100;
        selection10[i] = random;
        insertion10[i] = random;
        bubble10[i] = random;
    }

    //Rellenando los arrays de 100 espacios
    for (int i = 0; i < 100; i++) {
        int random = rand() % 100;
        selection100[i] = random;
        insertion100[i] = random;
        bubble100[i] = random;
    }

    //Rellenando los arrays de 1000 espacios
    for (int i = 0; i < 1000; i++) {
        int random = rand() % 100;
        selection1000[i] = random;
        insertion1000[i] = random;
        bubble1000[i] = random;
    }

    //Rellenando los arrays de 10000 espacios
    for (int i = 0; i < 10000; i++) {
        int random = rand() % 100;
        selection10000[i] = random;
        insertion10000[i] = random;
        bubble10000[i] = random;
    }

    printf("%s\n", "Array de 10 espacios desordenado");

    //Imprimiendo el array de 10 espacios desordenado
    for (int j = 0; j < 10; j++) {
        printf("%d ", selection10[j]);
    }

    //Benchmark de array con 10 elementos con Selection Sort
    double antes10_selection = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(selection10, 10);
    double despues10_selection = (float) clock() / CLOCKS_PER_SEC;
    double final10_selection = (despues10_selection - antes10_selection);

    //Benchmark de array con 10 elementos con Insertion Sort
    double antes10_insertion = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(insertion10, 10);
    double despues10_insertion = (float) clock() / CLOCKS_PER_SEC;
    double final10_insertion = (despues10_insertion - antes10_insertion);

    //Benchmark de array con 10 elementos con Bubble Sort
    double antes10_bubble = (float) clock() / CLOCKS_PER_SEC;
    //bubbleSort.bubbleSort(bubble10, 10);
    double despues10_bubble = (float) clock() / CLOCKS_PER_SEC;
    double final10_bubble = (despues10_bubble - antes10_bubble);

    printf("\n\n%s\n", "Array de 10 espacios ordenado");
    //Imprimiendo el array de 10 espacios ordenado
    for (int j = 0; j < 10; j++) {
        printf("%d ", selection10[j]);
    }

    printf("\n\nCon Selection Sort se ha tardado: %f s\n", final10_selection);
    printf("\nCon Insertion Sort se ha tardado: %f s\n", final10_insertion);
    //printf("\nCon Bubble Sort se ha tardado: %f s\n", final10_bubble);


    printf("\n%s\n", "--------------------------------------------------------");

    printf("\n\n%s\n\n", "Array de 100 espacios desordenado");

    //Imprimiendo el array de 100 espacios desordenado
    for (int j = 0; j < 100; j++) {
        printf("%d ", selection100[j]);
    }

    //Benchmark de array con 100 elementos con Selection Sort
    double antes100_selection = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(selection100, 100);
    double despues100_selection = (float) clock() / CLOCKS_PER_SEC;
    double final100_selection = (despues100_selection - antes100_selection);

    //Benchmark de array con 100 elementos con Insertion Sort
    double antes100_insertion = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(insertion100, 100);
    double despues100_insertion = (float) clock() / CLOCKS_PER_SEC;
    double final100_insertion = (despues100_insertion - antes100_insertion);

    //Benchmark de array con 100 elementos con Bubble Sort
    double antes100_bubble = (float) clock() / CLOCKS_PER_SEC;
    //bubbleSort.bubbleSort(bubble100, 100);
    double despues100_bubble = (float) clock() / CLOCKS_PER_SEC;
    double final100_bubble = (despues100_bubble - antes100_bubble);


    printf("\n\n%s\n", "Array de 100 espacios ordenado");

    //Imprimiendo el array de 100 espacios ordenado
    for (int j = 0; j < 100; j++) {
        printf("%d ", selection100[j]);
    }

    printf("\n\nCon Selection Sort se ha tardado: %f s\n", final100_selection);
    printf("\nCon Insertion Sort se ha tardado: %f s\n", final100_insertion);
    //printf("\nCon Bubble Sort se ha tardado: %f s\n", final100_bubble);


    printf("\n%s\n", "--------------------------------------------------------");

    printf("\n\n%s\n\n", "Array de 1000 espacios desordenado");

    //Imprimiendo el array de 1000 espacios desordenado
    for (int j = 0; j < 1000; j++) {
        printf("%d ", selection1000[j]);
    }

    //Benchmark de array con 1000 elementos con Selection Sort
    double antes1000_selection = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(selection1000, 1000);
    double despues1000_selection = (float) clock() / CLOCKS_PER_SEC;
    double final1000_selection = (despues1000_selection - antes1000_selection);

    //Benchmark de array con 1000 elementos con Insertion Sort
    double antes1000_insertion = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(insertion1000, 1000);
    double despues1000_insertion = (float) clock() / CLOCKS_PER_SEC;
    double final1000_insertion = (despues1000_insertion - antes1000_insertion);

    //Benchmark de array con 1000 elementos con Bubble Sort
    double antes1000_bubble = (float) clock() / CLOCKS_PER_SEC;
    //bubbleSort.bubbleSort(bubble1000, 1000);
    double despues1000_bubble = (float) clock() / CLOCKS_PER_SEC;
    double final1000_bubble = (despues1000_bubble - antes1000_bubble);

    printf("\n\n%s\n", "Array de 1000 espacios ordenado");
    //Imprimiendo el array de 1000 espacios ordenado
    for (int j = 0; j < 1000; j++) {
        printf("%d ", selection1000[j]);
    }

    printf("\n\nCon Selection Sort se ha tardado: %f s\n", final1000_selection);
    printf("\nCon Insertion Sort se ha tardado: %f s\n", final1000_insertion);
    //printf("\nCon Bubble Sort se ha tardado: %f s\n", final1000_bubble);


    printf("\n%s\n", "--------------------------------------------------------");


    printf("\n\n%s\n\n", "Array de 10000 espacios desordenado");

    //Imprimiendo el array de 10000 espacios desordenado
    for(int j=0; j<10000;j++){
        printf("%d ", selection10000[j]);
    }

    //Benchmark de array con 10000 elementos con Selection Sort
    double antes10000_selection = (float)clock()/CLOCKS_PER_SEC;;
    selectionSort.selectionSort(selection10000, 10000);
    double despues10000_selection = (float)clock()/CLOCKS_PER_SEC;;
    double final10000_selection = (despues10000_selection-antes10000_selection);

    //Benchmark de array con 10000 elementos con Insertion Sort
    double antes10000_insertion = (float) clock() / CLOCKS_PER_SEC;
    selectionSort.selectionSort(insertion10000, 10000);
    double despues10000_insertion = (float) clock() / CLOCKS_PER_SEC;
    double final10000_insertion = (despues10000_insertion - antes10000_insertion);

    //Benchmark de array con 10000 elementos con Bubble Sort
    double antes10000_bubble = (float) clock() / CLOCKS_PER_SEC;
    //bubbleSort.bubbleSort(bubble10000, 10000);
    double despues10000_bubble = (float) clock() / CLOCKS_PER_SEC;
    double final10000_bubble = (despues10000_bubble - antes10000_bubble);

    printf("\n\n%s\n\n", "Array de 10000 espacios ordenado");

    //Imprimiendo el array de 10000 espacios ordenado
    for(int j=0; j<10000;j++){
        printf("%d ", selection10000[j]);
    }

    printf("\n\nCon Selection Sort se ha tardado: %f s\n", final10000_selection);
    printf("\nCon Insertion Sort se ha tardado: %f s\n", final10000_insertion);
    //printf("\nCon Bubble Sort se ha tardado: %f s\n", final10000_bubble);
}