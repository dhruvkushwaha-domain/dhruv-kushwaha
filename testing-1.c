/* Mini Project 1: Number Guessing Game
   Usage: ./guess          -> random secret (1..100)
          ./guess 65       -> fixed secret, handy for testing */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int secret, guess, attempts = 0;

    if (argc > 1) {
        secret = atoi(argv[1]);
    } else {
        srand((unsigned)time(NULL));
        secret = rand() % 100 + 1;
    }

    printf("=== NUMBER GUESSING GAME ===\n\n");
    printf("I have generated a number between 1 and 100.\nCan you guess it?\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {          /* protects from letters / EOF -> no infinite loop */
            printf("\nInvalid input. Game over.\n");
            return 1;
        }
        attempts++;
        if (guess > secret)      printf("Lower number please\n");
        else if (guess < secret) printf("Higher number please\n");
    } while (guess != secret);

    printf("Congratulations! You guessed the number %d\nin %d attempts!\n", secret, attempts);
    return 0;
}