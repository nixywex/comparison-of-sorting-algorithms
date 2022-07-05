/**
@file csv_parser.h
@author Шелудько Н.С., гр. 515-в
@date 5 липня 2022р.
@brief Навчальна практика. Варіант 21. Порівняння методів сортування масивів.
*/

#ifndef csv_parser_h
#define csv_parser_h

#include <stdio.h>
#include <stdlib.h>
#include "struct_sorting.h"

/**
 *Зчитує дані з csv файлу у масив.
 *@param users масив, у які записуються дані.
 *@param filePath шлях до файлу.
 *@return кількість зчитаних полей, або -1, якщо файл не вдалося відкрити.
*/
int getUsersFromFile(user users[], char* filePath);

/**
 *Зберігає дані з масиву до csv файлу.
 *@param users масив, з якого читаються дані.
 *@param filePath шлях для збереження готового файлу.
 * @param length довжина масиву.
 *@return 1, якщо вдалося записати дані, або -1, якщо виникла помилка.
*/
int writeSortedArr(user users[], char* filePath, int length);

#endif
