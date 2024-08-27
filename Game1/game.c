#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int number, nguesses = 0;
    int guess;
    srand(time(0));
    number = rand() % 100 + 1; // Generate Random number between 1 to 100;
    // printf("Random Number Is %d\n", number);
    while (guess != number)
    {
        printf("Enter Number Between 1 to 100 : ");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Bigger Number Please\n");  
        }
        else if (guess > number)
        {
            printf("Lower Number Please\n");
        }
        else
        {
            printf("You Guessed It Right\n");
        }
        nguesses++;
    }
    printf("You got the number in %d attempts", nguesses);

    // Keep Running The Loop Until Guess is complete
    return 0;
}