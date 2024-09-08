#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TRec;

void help();
int load(const char *filename, TRec records[], int max_records);
void year_stat(TRec records[], int rc);
void month_stat(TRec records[], int rc, int month);
#endif