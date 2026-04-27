#include "tovar.h"
#include <stdio.h>
#include <time.h>

void createSpisok(TOVAR *v, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s %d %lf", v[i].name, &v[i].quantity, &v[i].price);
        scanf("%d %d %d", &v[i].date.year, &v[i].date.month, &v[i].date.day);
    }
}

double averagePrice(TOVAR *v, int n) {
    double s = 0;
    for (int i = 0; i < n; i++) s += v[i].price;
    return n == 0 ? 0 : s / n;
}

void sortByPrice(TOVAR *v, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].price > v[j].price) {
                TOVAR t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
}

int monthsDiff(Date d) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    int cy = t->tm_year + 1900;
    int cm = t->tm_mon + 1;
    return (cy - d.year) * 12 + (cm - d.month);
}

void printOld(TOVAR *v, int n) {
    for (int i = 0; i < n; i++) {
        if (monthsDiff(v[i].date) > 10) {
            printf("%s %.2lf\n", v[i].name, v[i].price);
        }
    }
}
