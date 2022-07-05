/**
@file struct_sorting.c
@author Шелудько Н.С., гр. 515-в
@date 5 липня 2022р.
@brief Навчальна практика. Варіант 21. Порівняння методів сортування масивів.
*/

#include "struct_sorting.h"

void bubbleSortStructArrByID(user array[], int length){
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (array[j].id > array[j + 1].id) {
                user tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void bubbleSortStructArrByDate(user array[], int length){
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            user a = array[j];
            user b = array[j + 1];
            if(a.date[2] > b.date[2] || (a.date[2] == b.date[2] && a.date[1] > b.date[1]) || (a.date[2] == b.date[2] && a.date[1] == b.date[1] && a.date[0] > b.date[0])){
                user tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }

        }
    }
}

void bubbleSortStructArrBySum(user array[], int length){
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (array[j].sum > array[j + 1].sum) {
                user tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void bubbleSortStructArrByName(user array[], int length){
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            char* currName = array[j].name;
            char* nextName = array[j + 1].name;
            if (strcmp(currName,nextName) > 0) {
                user tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void selectionSortStructArrByDate(user array[], int length){
    int minIndex;
    user tmp;

    for (int i = 0; i < length; i++){
        minIndex = i;

        for (int j = i + 1; j < length; j++){
            user a = array[minIndex];
            user b = array[j];
            
            if (a.date[2] > b.date[2] || (a.date[2] == b.date[2] && a.date[1] > b.date[1]) || (a.date[2] == b.date[2] && a.date[1] == b.date[1] && a.date[0] > b.date[0]))
                minIndex = j;
        }
        
        tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }
}

void selectionSortStructArrByName(user array[], int length){
    int minIndex;
    user tmp;

    for (int i = 0; i < length; i++){
        minIndex = i;

        for (int j = i + 1; j < length; j++){
            char* min = array[minIndex].name;
            char* curr = array[j].name;
                if (strcmp(min,curr) > 0)
                    minIndex = j;
        }

        tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }
}

void selectionSortStructArrByID(user array[], int length){
    int minIndex;
    user tmp;

    for (int i = 0; i < length; i++){
        minIndex = i;

        for (int j = i + 1; j < length; j++)
            if (array[minIndex].id > array[j].id)
                minIndex = j;

        tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }
}


void selectionSortStructArrBySum(user array[], int length){
    int minIndex;
    user tmp;

    for (int i = 0; i < length; i++){
        minIndex = i;

        for (int j = i + 1; j < length; j++)
            if (array[minIndex].sum > array[j].sum)
                minIndex = j;

        tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }
}

void insertionSortStructArrByDate(user array[], int length){
    int index;
    user newElement;

    for (int i = 1; i < length; i++){
        newElement = array[i] ;
        index = i - 1;
        
        user a = array[index];
        user b = newElement;
        
        while(index >= 0 && (a.date[2] > b.date[2] || (a.date[2] == b.date[2] && a.date[1] > b.date[1]) || (a.date[2] == b.date[2] && a.date[1] == b.date[1] && a.date[0] > b.date[0]))){
            array[index + 1] = array[index];
            index -= 1;
        }

        array[index + 1] = newElement;
    }
}

void insertionSortStructArrByID(user array[], int length){
    int index;
    user newElement;

    for (int i = 1; i < length; i++){
        newElement = array[i] ;
        index = i - 1;

        while(index >= 0 && array[index].id > newElement.id){
            array[index + 1] = array[index];
            index -= 1;
        }

        array[index + 1] = newElement;
    }
}

void insertionSortStructArrBySum(user array[], int length){
    int index;
    user newElement;

    for (int i = 1; i < length; i++){
        newElement = array[i] ;
        index = i - 1;

        while(index >= 0 && array[index].sum > newElement.sum){
            array[index + 1] = array[index];
            index -= 1;
        }

        array[index + 1] = newElement;
    }
}

void insertionSortStructArrByName(user array[], int length){
    int index;
    user newElement;

    for (int i = 1; i < length; i++){
        newElement = array[i] ;
        index = i - 1;

        while(index >= 0 && strcmp(array[index].name, newElement.name) > 0){
            array[index + 1] = array[index];
            index -= 1;
        }

        array[index + 1] = newElement;
    }
}

