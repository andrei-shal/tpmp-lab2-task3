#include "palindrome.h"

int isPalindrome(int x) {
    int rev = 0, t = x;
    while (t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }
    return rev == x;
}

int countPalindromes(int *a, int n) {
    int c = 0;
    for (int i = 0; i < n; i++)
        if (isPalindrome(a[i])) c++;
    return c;
}
