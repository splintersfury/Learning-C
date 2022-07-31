#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char answer[] = "y";
    //allocate memory for 3 scores
    double *scores = malloc(3 * sizeof(double));
    //check if memory allocation is successful
    if(!scores)
    {
        printf("Failed to allocate memory for scores");
        return 1;
    }

    int max = 3;
    int nscores;

    for(nscores = 0; strcmp(answer, "y") == 0; ++nscores)
    {
        if (nscores == max)
        {
            max += 1;
            scores = realloc(scores, max * sizeof(double));
            if (!scores)
            {
                printf("failed to allocate memory for scores");
                return 1;
            }
        }
        printf("Enter a test score: ");
        scanf("%lf", &scores[nscores]);

        printf("Would you like to continue? ");
        scanf("%s", &answer);
    }

    double total = 0;

    for (int i = 0; i < nscores; i++)
    {
        total += scores[i];
    }

    printf("%.2f is the average score.\n", (total / nscores));

    free(scores);
    
    return 0;

}
