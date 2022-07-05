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
} payment;

/**
* Сортує масив структур типу payment згідно поля id за допомогою метода бульбашки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrByID(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля date за допомогою метода бульбашки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrByDate(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля sum за допомогою метода бульбашки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrBySum(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля name за допомогою метода бульабшки.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void bubbleSortStructArrByName(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля date за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrByDate(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля sum за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrBySum(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля id за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrByID(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля name за допомогою метода вибору.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void selectionSortStructArrByName(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля date за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrByDate(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля sum за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrBySum(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля id за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrByID(payment array[], int length);

/**
* Сортує масив структур типу payment згідно поля name за допомогою метода включення.
* @param array масив для сортування.
* @param length довжина масиву.
*/
void insertionSortStructArrByName(payment array[], int length);

#endif


