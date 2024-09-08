#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

#define LINES 1000000

int main(int argc, char *argv[]) {
    if (argc < 2) {
        help();
        return 0;
    }

    char *filename = NULL;
    int month = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            help();
            return 0;
        } else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            filename = argv[++i];
        } else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[++i]);
        } else {
            help();
            return 1;
        }
    }

    if (!filename) {
        fprintf(stderr, "Error: No filename provided.\n");
        return 1;
    }

    TRec *records = (TRec *)malloc(LINES * sizeof(TRec));
    if (records == NULL) {
        printf("Memory error\n");
        return 1; 
    }
    int record_count = load(filename, records, LINES);

    if (record_count < 0) {
        fprintf(stderr, "Error load.\n");
        return 1;
    }

    if (month > 0) {
        month_stat(records, record_count, month);
    } else {
        for (int i = 1; i <= 12; i++) {
            month_stat(records, record_count, i);
        }
        year_stat(records, record_count);
    }

    free(records);
    return 0;
}