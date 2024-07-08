#include <stdio.h>

int main() {
    int num_pebbles;

    // Read the number of pebbles in the heap
    printf("Enter the number of pebbles in the heap: ");
    scanf("%d", &num_pebbles);

    // Ellis picks the most number of pebbles in the first turn
    int ellis_pick = num_pebbles - 1;
    int remaining_pebbles = 1; // After Ellis's first pick, 1 pebble remains

    // Determine the winner
    // If Ellis picks the last remaining pebble, she wins
    if (remaining_pebbles % 2 != 0) {
        printf("Ellis will win.\n");
    } else {
        printf("Bob will win.\n");
    }

    return 0;
}
