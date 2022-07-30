#include <stdio.h>


int main(void)
{
    //ini var
    int deno, nume;
    
    //get user input
    printf("Enter the Numerator: ");
    scanf("%d", &nume);
    printf("Enter the Denominator: ");
    scanf("%d", &deno);

    //check if there is any remainder
    if (nume % deno == 0)
    {
        printf("There is no Remainder");
    }
    else
    {
        printf("There is a remainder! The remainder is %d.", (nume % deno));
    }

    
    return 0;



}
