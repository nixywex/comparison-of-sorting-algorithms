/**
@file csv_parser.c
@author Шелудько Н.С., гр. 515-в
@date 5 липня 2022р.
@brief Навчальна практика. Варіант 21. Порівняння методів сортування масивів.
*/

#include "csv_parser.h"

int getUsersFromFile(user users[], char* filePath){
    FILE* F = fopen(filePath, "r");
    if(F == NULL) return -1;
    
    char line[1024];
    char *sp;
    int count = 0;
        
    while (fgets(line, 1024, F) != NULL){
        sp = strtok(line, ",");
        strcpy(users[count].name, sp);
        
        sp = strtok(NULL, ",");
        users[count].id = atoi(sp);
        
        sp = strtok(NULL, ",");
        users[count].sum = atof(sp);
        
        for(int i = 0; i < 3; i++){
            sp = strtok(NULL, ",");
            users[count].date[i] = atoi(sp);
        }

        count++;
    }
    
    return count;
}
