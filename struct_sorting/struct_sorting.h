/**
@file struct_sorting.h
@author Шелудько Н.С., гр. 515-в
@date 5 липня 2022р.
@brief Навчальна практика. Варіант 21. Порівняння методів сортування масивів.
*/

#ifndef STRUCT_SORTING_H
#define STRUCT_SORTING_H

#include <string.h>

typedef struct{
    char name[100];
    int id;
    float sum;
    int date[3];
} user;

/**
* Сортує масив структур типу user згідно поля id за допомогою метода бульбашки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrByID(user array[], int length);

/**
* Сортує масив структур типу user згідно поля date за допомогою метода бульбашки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrByDate(user array[], int length);

/**
* Сортує масив структур типу user згідно поля sum за допомогою метода бульбашки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrBySum(user array[], int length);

/**
* Сортує масив структур типу user згідно поля name за допомогою метода бульабшки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrByName(user array[], int length);

/**
* Сортує масив структур типу user згідно поля date за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrByDate(user array[], int length);

/**
* Сортує масив структур типу user згідно поля sum за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrBySum(user array[], int length);

/**
* Сортує масив структур типу user згідно поля id за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrByID(user array[], int length);

/**
* Сортує масив структур типу user згідно поля name за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrByName(user array[], int length);

/**
* Сортує масив структур типу user згідно поля date за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrByDate(user array[], int length);

/**
* Сортує масив структур типу user згідно поля sum за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrBySum(user array[], int length);

/**
* Сортує масив структур типу user згідно поля id за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrByID(user array[], int length);

/**
* Сортує масив структур типу user згідно поля name за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrByName(user array[], int length);

#endif


