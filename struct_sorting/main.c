/**
@file main.c
@author Шелудько Н.С., гр. 515-в
@date 5 липня 2022р.
@brief Навчальна практика. Варіант 21. Порівняння методів сортування масивів.
*/

#include <stdio.h>
#include <string.h>
#include "struct_sorting.h"
#include "csv_parser.h"

#define MAX_SIZE 20000

int main(int argc, const char * argv[]){
    if(argc == 2){
        if(!strcmp(argv[1], "-info")){
            printf("СОРТУВАННЯ МАСИВУ\nЗа допомогою цієї програми можна відсортувати масив типу user за"
                 "всіми полями та за допомгою 3-х алгоритмів сортування. \n\nВИКОРИСТАННЯ\n"
                 "Для роботи треба вказати такі аргументи : filePath -f type\nде, filePath - "
                 "шлях до файлу типу csv,\n-f - метод сортування(-b - бульабшкова, -s - вибором, "
                 "-i - включенням)\ntype - поле для сортування (name, id, sum, date).\n"
                   "Програма, після завершення сортування збереже відсортований файл.\n");
        } else {
            puts("Помилка. Невірний запуск програми!");
        }
           
    } else if(argc == 4){
        payment users[MAX_SIZE];
        int length = getUsersFromFile(users, argv[1]);
        if(length == -1 || length > MAX_SIZE){
            puts("Помилка. Зчитати файл не вдалося");
            return 1;
        }

        if(!strcmp(argv[2], "-b")){
            if(!strcmp(argv[3], "id")){
                bubbleSortStructArrByID(users, length);
            } else if(!strcmp(argv[3], "name")){
                bubbleSortStructArrByName(users, length);
            } else if(!strcmp(argv[3], "sum")){
                bubbleSortStructArrBySum(users, length);
            } else if(!strcmp(argv[3], "date")){
                bubbleSortStructArrByDate(users, length);
            } else {
                puts("Помилка. Невірний запуск програми!");
                return 1;
            }
        } else if(!strcmp(argv[2], "-s")){
            if(!strcmp(argv[3], "id")){
                selectionSortStructArrByID(users, length);
            } else if(!strcmp(argv[3], "name")){
                selectionSortStructArrByName(users, length);
            } else if(!strcmp(argv[3], "sum")){
                selectionSortStructArrBySum(users, length);
            } else if(!strcmp(argv[3], "date")){
                selectionSortStructArrByDate(users, length);
            } else {
                puts("Помилка. Невірний запуск програми!");
                return 1;
            }
        } else if(!strcmp(argv[2], "-i")){
            if(!strcmp(argv[3], "id")){
                insertionSortStructArrByID(users, length);
            } else if(!strcmp(argv[3], "name")){
                insertionSortStructArrByName(users, length);
            } else if(!strcmp(argv[3], "sum")){
                insertionSortStructArrBySum(users, length);
            } else if(!strcmp(argv[3], "date")){
                insertionSortStructArrByDate(users, length);
            } else {
                puts("Помилка. Невірний запуск програми!");
                return 1;
            }
        } else {
            puts("Помилка. Невірний запуск програми!");
        }
        if(writeSortedArr(users, argv[0], length) == 1){
            puts("Файл збережено успішно!");
        } else {
            puts("Помилка. Не вдалося зберігти файл!");
        }
    }
    
    return 0;
}
