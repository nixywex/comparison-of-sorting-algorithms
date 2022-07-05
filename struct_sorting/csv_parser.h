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

#endif
