
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(NULL));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // printf("Random Number: %d\n", randomNumber);
int no_of_guesses = 0;    
 int guessed;
 printf("I have chosen a number between 1 and 100.\n");
printf("Try to guess it!\n");

do {
  printf("\nGuess the number :");
  scanf("%d",&guessed);
  if(guessed>randomNumber)
  printf("Lower number please\n");
  else if(guessed<randomNumber)
  printf("Higher  number please\n");
  else printf("Congrats!\n");
  no_of_guesses++;

}while (guessed!=randomNumber);
printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}
