#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int times;
    int heads = 0;
    int tails = 0;
    int n;

    srand(time(0));
    printf("How many times would you like to flip the coin?");
    scanf("%d", &times);

    for (int i = 0; i < times; i++)
    {
        n = rand() % 2;
        if (n == 1)
        {
            tails++;
        }
        else
        {
            heads++;
        }
    }
    printf("%d heads and %d tails.", heads, tails);
    

    return 0;

}
