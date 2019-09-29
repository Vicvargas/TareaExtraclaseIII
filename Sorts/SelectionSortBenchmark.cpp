//
// Created by josecespedes on 29/9/19.
//

#include "SelectionSortBenchmark.h"

SelectionSortBenchmark::SelectionSortBenchmark() {
    SelectionSort *selectionSort = new SelectionSort;
    //Definiendo los distintos arrays
    int *selection10 = new int[10];
    int *selection100 = new int[100];
    int *selection1000 = new int[1000];
    int *selection10000 = new int[10000];

    //Rellenando el array de 10 espacios
    for(int i = 0; i<10; i++){
        int random = rand()%100;
        selection10[i] = random;
    }

    //Rellenando el array de 100 espacios
    for(int i = 0; i<100; i++){
        int random = rand()%100;
        selection100[i] = random;
    }

    //Rellenando el array de 1000 espacios
    for(int i = 0; i<1000; i++){
        int random = rand()%100;
        selection1000[i] = random;
    }

    //Rellenando el array de 10000 espacios
    for(int i = 0; i<10000; i++){
        int random = rand()%100;
        selection10000[i] = random;
    }

    std::cout<<"\nArray de 10 espacios desordenado: \n"<<std::endl;

    //Imprimiendo el array de 10 espacios desordenado
    for(int j=0; j<10;j++){
        std::cout<<selection10[j]<< " ";
    }

    std::cout<<"\nArray de 10 espacios ordenado: \n"<<std::endl;
    //Se ordena y saca el tiempo
    double antes10 = (float)clock()/CLOCKS_PER_SEC;
    selectionSort->selectionSort(selection10, 10);
    double despues10 = (float)clock()/CLOCKS_PER_SEC;
    double final10 = (despues10-antes10);

    //Imprimiendo el array de 10 espacios ordenado
    for(int j=0; j<10;j++){
        std::cout<<selection10[j]<< " ";
    }

    std::cout<<"\nY se ha tardado: " + std::to_string(final10) + " s"<<std::endl;

    std::cout<<"\n--------------------------------------------------------\n"<<std::endl;

    std::cout<<"\nArray de 100 espacios desordenado: \n"<<std::endl;

    //Imprimiendo el array de 100 espacios
    for(int j=0; j<100;j++){
        std::cout<<selection100[j]<< " ";
    }

    std::cout<<"\nArray de 100 espacios ordenado: \n"<<std::endl;
    //Se ordena y saca el tiempo
    double antes100 = (float)clock()/CLOCKS_PER_SEC;
    selectionSort->selectionSort(selection100, 100);
    double despues100 = (float)clock()/CLOCKS_PER_SEC;
    double final100 = (despues100-antes100);

    //Imprimiendo el array de 100 espacios ordenado
    for(int j=0; j<100;j++){
        std::cout<<selection100[j]<< " ";
    }

    std::cout<<"\nY se ha tardado: " + std::to_string(final100) + " s"<<std::endl;


    std::cout<<"\n--------------------------------------------------------\n"<<std::endl;

    std::cout<<"Array de 1000 espacios desordenado: \n"<<std::endl;

    //Imprimiendo el array de 1000 espacios
    for(int j=0; j<1000;j++){
        std::cout<<selection1000[j]<< " ";
    }

    std::cout<<"\nArray de 1000 espacios ordenado: \n"<<std::endl;
    //Se ordena y saca el tiempo
    double antes1000 = (float)clock()/CLOCKS_PER_SEC;
    selectionSort->selectionSort(selection100, 1000);
    double despues1000 = (float)clock()/CLOCKS_PER_SEC;
    double final1000 = (despues1000-antes1000);

    //Imprimiendo el array de 1000 espacios ordenado
    for(int j=0; j<1000;j++){
        std::cout<<selection1000[j]<< " ";
    }

    std::cout<<"\nY se ha tardado: " + std::to_string(final1000) + " s"<<std::endl;


    std::cout<<"\n--------------------------------------------------------\n"<<std::endl;

    std::cout<<"Array de 10000 espacios desordenado: \n"<<std::endl;

    //Imprimiendo el array de 10000 espacios
    for(int j=0; j<10000;j++){
        std::cout<<selection10000[j]<< " ";
    }

    std::cout<<"\nArray de 10000 espacios ordenado: \n"<<std::endl;
    //Se ordena y saca el tiempo
    double antes10000 = (float)clock()/CLOCKS_PER_SEC;;
    selectionSort->selectionSort(selection10000, 10000);
    double despues10000 = (float)clock()/CLOCKS_PER_SEC;;
    double final10000 = (despues10000-antes10000);

    //Imprimiendo el array de 10000 espacios ordenado
    for(int j=0; j<10000;j++){
        std::cout<<selection10000[j]<< " ";
    }

    std::cout<<"\nY se ha tardado: " + std::to_string(final10000) + " s"<<std::endl;
}