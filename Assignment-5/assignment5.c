#include <stdio.h>


int main(void)
{
    //ini var
    float seconds;
    
    //get user input
    printf("Enter the amount of seconds: ");
    scanf("%f", &seconds);

    //need to break up to hours, mins, seconds
    float hours;
    float mins;
    float secs;

    //hours in integer, so its whole number
    hours = (int)(seconds / 3600);

    //mins in integer too but subtract hours
    mins = (int)((seconds - (hours * 3600))/ 60);

    //seconds leftover
    secs = (seconds - hours*3600 - mins*60);

    //print output
    printf("%0.0f seconds is equal to %0.0f hours, %0.0f minutes and %0.0f seconds.", seconds, hours, mins, secs);

    return 0;



}
