#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userChoice, computerChoice;
    char playAgain;

    // Seed the random number generator with the current time
    srand(time(0));

    do
    {
        printf("Let's play Rock-Paper-Scissors!\n");
        printf("Enter your choice:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        scanf("%d", &userChoice);

        if (userChoice < 1 || userChoice > 3)
        {
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            return 1;
        }

        // Generate a random choice for the computer (1 for Rock, 2 for Paper, 3 for Scissors)
        computerChoice = rand() % 3 + 1;

        // Display the computer's choice
        printf("Computer's choice: ");
        switch (computerChoice)
        {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
        }

        // Determine the winner
        if (userChoice == computerChoice)
        {
            printf("It's a tie!\n");
        }
        else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))
        {
            printf("You win!\n");
        }
        else
        {
            printf("Computer wins!\n");
        }

        // Ask if the player wants to play again
        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);
        printf("\n");
    }
    while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}
