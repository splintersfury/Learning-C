#include <stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    printf ("The array has %d numbers.", (sizeof(array) / sizeof(array[1])));

    return 0;

}
