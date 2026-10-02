```c
#ifndef DRUG_DATA_H
#define DRUG_DATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float concentration;
    float half_life;
    int max_dose;
} DrugData;

// Function to read drug data from a file
DrugData* read_drug_data(const char* filename);

// Function to free the allocated memory
void free_drug_data(DrugData* drug_data);

#endif
```