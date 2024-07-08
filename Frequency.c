#include <stdio.h>

int countFrequency(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 5, 6, 2, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the element to check its frequency: ");
    scanf("%d", &x);

    int frequency = countFrequency(arr, n, x);
    printf("Element %d appears %d times in the array.\n", x, frequency);

    return 0;
}
