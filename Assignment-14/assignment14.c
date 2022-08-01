#include <stdio.h>


int main(void)
{
    int number = 21;
    int *ptr = &number;

    printf("The address of our pointer is: %p\n", &ptr);
    printf("The value of our pointer is: %p\n", ptr);
    printf("The address of our number is: %p\n", &number);
    printf("The value of our number is: %d\n", number);
    return 0;

}
