#include <stdio.h>

#define NUM_HOUSES 10

int main() {
    int members[NUM_HOUSES];

    // Example: populate the array with the number of members in each house
    // You can modify this array with actual data
    printf("Enter the number of members in each of the 10 houses:\n");
    for (int i = 0; i < NUM_HOUSES; i++) {
        printf("House %d: ", i + 1);
        scanf("%d", &members[i]);
    }

    printf("\nHouses where the sum of members in neighboring houses is odd:\n");
    for (int i = 0; i < NUM_HOUSES; i++) {
        int left_neighbor = (i == 0) ? 0 : members[i - 1];
        int right_neighbor = (i == NUM_HOUSES - 1) ? 0 : members[i + 1];

        int sum_neighbors = left_neighbor + right_neighbor;

        if (sum_neighbors % 2 != 0) {
            printf("House %d\n", i + 1);
        }
    }

    return 0;
}
