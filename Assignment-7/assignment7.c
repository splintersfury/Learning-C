#include <stdio.h>
#include <math.h>
int main(void)
{
    //ini var
    float vara, varb, varc;
    
    //get user input
    printf("Enter the value of variable 'A': ");
    scanf("%f", &vara);
    printf("Enter the value of variable 'B': ");
    scanf("%f", &varb);
    printf("Enter the value of variable 'C': ");
    scanf("%f", &varc);

    float eqn1, eqn2;
    eqn1 = ((-varb) + sqrt((varb * varb)- (4*vara*varc))) / (2*vara);
    eqn2 = ((-varb) - sqrt((varb * varb)- (4*vara*varc))) / (2*vara);
    
    printf("+ is %f", eqn1);
    printf("- is %f", eqn2);
    return 0;



}
