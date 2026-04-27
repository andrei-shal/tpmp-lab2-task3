#ifndef TOVAR_H
#define TOVAR_H

#define MAX 10

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char name[50];
    int quantity;
    double price;
    Date date;
} TOVAR;

void createSpisok(TOVAR *v, int n);
double averagePrice(TOVAR *v, int n);
void sortByPrice(TOVAR *v, int n);
void printOld(TOVAR *v, int n);

#endif
