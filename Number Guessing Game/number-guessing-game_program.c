#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numberToGuess, userGuess;
    char playAgain;

    // Seed the random number generator with the current time
    srand(time(0));

    do
    {
        // Generate a random number between 1 and 100
        numberToGuess = rand() % 100 + 1;

        printf("Welcome to the Number Guessing Game!\n");
        printf("I have selected a random number between 1 and 100.\n");

        do
        {
            printf("Guess the number: ");
            scanf("%d", &userGuess);

            if (userGuess < numberToGuess)
            {
                printf("Too low! Try again.\n");
            }
            else if (userGuess > numberToGuess)
            {
                printf("Too high! Try again.\n");
            }
            else
            {
                printf("\nCongratulations! You've guessed the correct number: %d\n", numberToGuess);
            }
        }
        while (userGuess != numberToGuess);

        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);
        printf("\n");

    }
    while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}
