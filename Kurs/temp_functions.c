#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"


// Мануал пользователя
void help() {
    printf("Temperature Analitics\n");
    printf("Usage:\n");
    printf("  -h                    : Help message.\n");
    printf("  -f <filename.csv>     : Add CSV file.\n");
    printf("  -m <month>            : Monthly statistics.\n");
}

//Выгрузка из CSV-файла
int load(const char *filename, TRec records[], int max_records) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return -1;
    }

    char line[256];
    int rc = 0;
    int line_number = 0;

    while (fgets(line, sizeof(line), file)) {
        line_number++;
        TRec r;
        if (sscanf(line, "%d;%d;%d;%d;%d;%d", &r.year, &r.month, &r.day, &r.hour, &r.minute, &r.temperature) != 6) {
            fprintf(stderr, "Error in line %d: %s", line_number, line);
            continue;
        }

        if (rc < max_records) {
            records[rc++] = r;
        } else {
            break; 
        }
    }

    fclose(file);
    return rc;
}

// Функция расчета статистики за месяц
void month_stat(TRec records[], int rc, int month) {
    int sum = 0, count = 0;
    int min_temp = 100, max_temp = -100;

    for (int i = 0; i < rc; i++) {
        if (records[i].month == month) {
            int temp = records[i].temperature;
            sum += temp;
            count++;

            if (temp < min_temp) min_temp = temp;
            if (temp > max_temp) max_temp = temp;
        }
    }

    if (count > 0) {
        printf("Month: %d\n", month);
        printf("Average Temperature: %.2f\n", (float)sum / count);
        printf("Min Temperature: %d\n", min_temp);
        printf("Max Temperature: %d\n", max_temp);
    } else {
        printf("No data for month %d\n", month);
    }
}

// Функция расчета статистики за год
void year_stat(TRec records[], int rc) {
    int sum = 0, count = 0;
    int min_temp = 100, max_temp = -100;

    for (int i = 0; i < rc; i++) {
        int temp = records[i].temperature;
        sum += temp;
        count++;

        if (temp < min_temp) min_temp = temp;
        if (temp > max_temp) max_temp = temp;
    }

    if (count > 0) {
        printf("Yearly Statistics:\n");
        printf("Average Temperature: %.2f\n", (float)sum / count);
        printf("Min Temperature: %d\n", min_temp);
        printf("Max Temperature: %d\n", max_temp);
    }
}