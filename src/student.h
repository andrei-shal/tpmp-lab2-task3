#ifndef STUDENT_H
#define STUDENT_H

#include "tovar.h"

typedef struct {
    char index[20];
    char country[50];
    char region[50];
    char district[50];
    char city[50];
    char street[50];
    char house[10];
    char apartment[10];
} Address;

typedef struct {
    char surname[50];
    char name[50];
    char patronymic[50];
    char gender[10];
    char nationality[50];
    double height;
    double weight;
    Date birth;
    char phone[20];
    Address address;
    char university[100];
    int course;
    char group[20];
    double avg;
    char specialty[100];
} Student;

void inputStudents(Student *st, int n);
void printLowAvg(Student *st, int n);

#endif
