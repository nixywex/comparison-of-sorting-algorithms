/**
@file csv_parser.c
@author Шелудько Н.С., гр. 515-в
@date 5 липня 2022р.
@brief Навчальна практика. Варіант 21. Порівняння методів сортування масивів.
*/

#include "csv_parser.h"

int getUsersFromFile(payment users[], char* filePath){
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
    
    fclose(F);
    
    return count;
}

int writeSortedArr(payment users[], char* filePath, int length){
    char path[2048];
    sprintf(&path, "%s_sorted.csv", filePath);
    
    FILE* F = fopen(path, "w");
    if(F == NULL) return -1;
    
    for(int i = 0; i < length; i++){
        payment curr = users[i];

        fprintf(F, "%s,%i,%f,%i,%i,%i\n", curr.name, curr.id, curr.sum, curr.date[0], curr.date[1], curr.date[2]);
    }
    
    fclose(F);
    
    return 1;
}
