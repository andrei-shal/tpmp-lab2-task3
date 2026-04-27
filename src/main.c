#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "palindrome.h"
#include "tovar.h"
#include "student.h"

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    int a[100];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10000;
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("%d\n", countPalindromes(a, n));

    TOVAR sp[MAX];

    createSpisok(sp, m);

    printf("%.2lf\n", averagePrice(sp, m));

    sortByPrice(sp, m);
    for (int i = 0; i < m; i++) {
        printf("%s %.2lf\n", sp[i].name, sp[i].price);
    }

    printOld(sp, m);

    int k;
    scanf("%d", &k);

    Student st[100];

    inputStudents(st, k);
    printLowAvg(st, k);

    return 0;
}
