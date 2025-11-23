
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playgame()
{
     char play_again ;
    do
    { // Level selection
        printf("Select a difficulty level :\n");
        printf("1.Easy \t (1-100)\n");
        printf("2.Medium  (1-500)\n");
        printf("3.Hard \t (1-1000)\n");

        int level, maxnumber;
        scanf("%d", &level);
        switch (level)
        {
        case 1:
            maxnumber = 100;
            break;
        case 2:
            maxnumber = 500;
            break;
        case 3:
            maxnumber = 1000;
            break;
        default:
            printf("Invalid choice.Defaulting to easy\n");
            maxnumber = 100;
            break;
        }

        // Generate random number between 0 and maxnumber -1
        // We are adding 1 to move that range from 1 to maxnumber
        int randomNumber = (rand() % maxnumber) + 1; // rand is a function in stdlib

        int no_of_guesses = 0;
        int guessed;
        printf("I have chosen a number between 1 and %d.\n", maxnumber);
        printf("Try to guess it!\n");

        do
        {
            printf("\nGuess the number :");
            scanf("%d", &guessed);
            getchar();
            if (guessed > randomNumber)
                printf("Lower number please\n");
            else if (guessed < randomNumber)
                printf("Higher  number please\n");
            else
                printf("Congrats!\n");
            no_of_guesses++;

        } while (guessed != randomNumber);
        printf("You guessed the number in %d guesses", no_of_guesses);
    // Play again
    printf("\nDo you want to play again? (y/n):");
    scanf("%c",&play_again);
    } while ( play_again == 'y' || play_again == 'Y');
}
int main()
{
    // Seed the random number generator with current time
    srand(time(NULL));
    playgame();
    return 0;
}
