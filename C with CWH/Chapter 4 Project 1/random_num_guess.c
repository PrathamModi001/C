#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess = 0, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
    printf("The secret number is : %d\n\n", number);

    while (guess != number)
    {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Number too low! Guess a higher number.\n");
        }
        else if (guess > number)
        {
            printf("Number too high! Guess a lower number.\n");
        }
        else
        {
            printf("Congrats! You have correctly guessed the secret number %d in %d attempts.\n", number, nguesses);
        }
        nguesses++;
    }

    return 0;
}