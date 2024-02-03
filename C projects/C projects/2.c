#include<stdio.h>
#include <stdlib.h>
#include <time.h>
    int main()
{
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 1000 + 1; // Generate random no 1-100
                                // keep running the loop until the number is gudessd

    // Hacked/printf("The number is %d\n", number); //Hacking tricks
    do
    {
        printf("Enter Guess the number between 1 to 1000 :");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempt\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    printf("The number is %d\n", number);
    return 0;
}

