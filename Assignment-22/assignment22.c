#include <stdio.h>
#include <stdlib.h>

//define structure
struct stats
{
    int points;
    int games;
} ;

struct stats players[5];

int main(void)
{
    for(int counter = 0; counter < 5; counter++)
    {
        printf("Enter Player %d's point total: ", (counter + 1));
        scanf("%d", &players[counter].points);

        printf("Enter Player %d's game total: ", (counter + 1));
        scanf("%d", &players[counter].games);
    }

    for (int counter = 0; counter < 5; counter++)
    {
        float average = (float)(players[counter].points)/(players[counter].games);
        printf("\nPlayer %d's scoring average was %.2f ppg.", (counter + 1), average);
    }

    return 0;

}
