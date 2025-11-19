#include <stdio.h>

int main() {

    int matchsticks = 21;
    int user_pick;
    int computer_pick;

    printf("--- Matchstick Game (You vs. Computer) ---\n");
    printf("Rules:\n");
    printf("1. Total matchsticks: 21.\n");
    printf("2. You and the computer take turns picking 1, 2, 3, or 4 matchsticks.\n");
    printf("3. The player forced to pick the LAST matchstick loses.\n");
    printf("    (The computer is programmed to always win!)\n");
    printf("--------------------------------------------\n\n");


    while (matchsticks > 1) {


        printf("--- Your Turn ---\n");
        printf("There are **%d** matchsticks remaining.\n", matchsticks);


        do {
            printf("How many do you want to pick? (1-4): ");
            if (scanf("%d", &user_pick) != 1) {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n');
                user_pick = 0;
            }
            else if (user_pick < 1 || user_pick > 4) {
                printf("Invalid choice! You must pick 1, 2, 3, or 4.\n");
            }
            else if (user_pick > matchsticks) {
                 printf("You can't pick %d, there are only %d left!\n", user_pick, matchsticks);
                 user_pick = 0;
            }

        } while (user_pick < 1 || user_pick > 4);


        matchsticks = matchsticks - user_pick;
        printf("You picked **%d** matchsticks. **%d** remain.\n", user_pick, matchsticks);


        if (matchsticks == 1) {
            break;
        }
        else if (matchsticks < 1) {

            break;
        }

        printf("\n--- Computer's Turn ---\n");


        computer_pick = 5 - user_pick;


        if (computer_pick > matchsticks) {

            computer_pick = matchsticks - 1;
        }

        if (computer_pick < 1) {
            computer_pick = 1;
        }

        if (computer_pick > 4) {

        }


        matchsticks = matchsticks - computer_pick;

        printf("Computer picked **%d** matchsticks.\n", computer_pick);
        printf("--- End of Computer's Turn ---\n\n");
    }

    printf("\n--- Game Over ---\n");
    printf("There is only **1** matchstick left.\n");



    printf("You are forced to pick the last matchstick.\n");
    printf("\n**YOU LOSE! The Computer Wins!**\n");

    return 0;
}
