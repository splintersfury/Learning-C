#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int games = 4;
    int players = 5;
    int scores[4][5];

    for (int i = 0; i < games; i++)
    {
        printf("Game #%d \n", i + 1);
        for (int y = 0; y < players; y++)
        {
            printf("Enter scoring total for Player %d: ", y + 1);
            scanf("%d", &scores[i][y]);
        }
    }

    double sum5player[5];

    for (int a = 0; a < games; a++)
    {
        for (int b = 0; b < players; b++)
        {
            sum5player[b] += scores[a][b];
        }
    }

    double highestscore = sum5player[0];
    int player = 1;

    for (int p =1 ; p < 5; p++)
    {
        if (sum5player[p] > highestscore)
        {
            highestscore = sum5player[p];
            player = p + 1;
        }
    }
    
    printf ("Highest scorer is player %d and score of %0.0lf", player, highestscore);

}
