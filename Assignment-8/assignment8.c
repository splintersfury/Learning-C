#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    //ini var
    float numberx;
    
    //get user input
    printf("Enter a number between 1 and 500: ");
    scanf("%f", &numberx);

    if (numberx < 0 | numberx > 500)
    {
        printf("Please choose a number between 1 and 500");
        exit(0);
    }
    else
    {
    }

    if (numberx < 101)
    {
        printf("Your number is between 1 and 100");
    }
    else
    {
        if (numberx < 201)
        {
            printf("Your number is between 100 and 200");
        }
        else
        {
            if (numberx < 301)
            {
                printf("Your number is between 200 and 300");
            }
            else
            {
                if (numberx < 401)
                {
                    printf("Your number is between 300 and 400");
                }
                else
                {
                    printf("Your number is between 400 and 500");
                }
            }
        }
    }
    return 0;



}
