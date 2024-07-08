#include <stdio.h>

int main() {
    int total_matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the 21 Matchstick Game!\n");
    printf("Rules: You can pick 1, 2, 3, or 4 matchsticks on your turn.\n");
    printf("The computer will also pick matchsticks. Whoever picks the last matchstick loses.\n");

    while (total_matchsticks > 1) {
        // User's turn
        printf("\nMatchsticks remaining: %d\n", total_matchsticks);
        printf("Your turn: How many matchsticks do you want to pick (1-4)? ");
        scanf("%d", &user_pick);

        // Validate user input
        while (user_pick < 1 || user_pick > 4) {
            printf("Invalid choice! Please pick between 1 and 4 matchsticks: ");
            scanf("%d", &user_pick);
        }

        total_matchsticks -= user_pick;

        // Check if the user lost
        if (total_matchsticks == 1) {
            printf("\nYou picked the last matchstick. You lose!\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - user_pick;
        total_matchsticks -= computer_pick;
        printf("Computer picks %d matchstick(s).\n", computer_pick);

        // Check if the computer lost (this should never happen with this strategy)
        if (total_matchsticks == 1) {
            printf("\nYou have the remaining matchstick. You lose!\n");
            break;
        }
    }

    return 0;
}
