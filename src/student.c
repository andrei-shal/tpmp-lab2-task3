#include "student.h"
#include <stdio.h>

void inputStudents(Student *st, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", st[i].surname, st[i].name, st[i].patronymic);
        scanf("%s %s", st[i].gender, st[i].nationality);
        scanf("%lf %lf", &st[i].height, &st[i].weight);
        scanf("%d %d %d", &st[i].birth.year, &st[i].birth.month, &st[i].birth.day);
        scanf("%s", st[i].phone);
        scanf("%s %s", st[i].address.index, st[i].address.country);
        scanf("%s %s", st[i].address.region, st[i].address.district);
        scanf("%s %s", st[i].address.city, st[i].address.street);
        scanf("%s %s", st[i].address.house, st[i].address.apartment);
        scanf("%s %d", st[i].university, &st[i].course);
        scanf("%s %lf %s", st[i].group, &st[i].avg, st[i].specialty);
    }
}

void printLowAvg(Student *st, int n) {
    for (int i = 0; i < n; i++) {
        if (st[i].avg < 7.0) {
            printf("%s %.2lf\n", st[i].surname, st[i].avg);
        }
    }
}
