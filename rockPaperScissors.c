#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genrateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{

    if (char1 == char2)
    {

        if ((char1 == 'r') && (char2 == 's'))
        {
            return -1;
        }

        else if ((char2 == 'r') && (char1 == 's'))
        {
            return 1;
        }

        if ((char1 == 'r') && (char2 == 's'))
        {
            return 1;
        }

        else if ((char2 == 'r') && (char1 == 's'))
        {
            return 0;
        }

        if ((char1 == 'p') && (char2 == 'r'))
        {
            return 1;
        }

        else if ((char1 == 'p') && (char2 == 'r'))
        {
            return 0;
        }

        if ((char1 == 's') && (char2 == 'p'))
        {
            return 1;
        }

        else if ((char2 == 's') && (char1 == 'p'))
        {
            return 0;
        }
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock ,Paper ,Scissors .\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player 1's Turn : \n ");
        printf("Choose 1 for Rock , 2  for paper and 3 for scissors \n ");
        scanf("%d", &temp);
        playerChar = dict[temp - 1];
        printf("You choose %c  \n\n ", playerChar);

        printf("Computer's Turn : \n ");
        printf("Choose 1 for Rock , 2 for paper  , 3 for scissors \n ");
        temp = genrateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU choose %c \n ", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU GOT IT ! \n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a draw ! \n\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it ! \n\n");
        }
        printf("You : %d \n CPU : %d \n ", playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("\n you win the game  \n ");
    }
    else if (playerScore < compScore)
    {
        printf("CPU wins the game \n ");
    }
    else
    {
        printf("It's a draw \n ");
    }
  

    return 0;
}