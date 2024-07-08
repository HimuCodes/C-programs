#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;

    while (count < 100) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}