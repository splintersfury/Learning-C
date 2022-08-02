#include <stdio.h>
#include <stdlib.h>

//define structure
struct test
{
    int single;
} ;


int main(void)
{
    struct test *ptr;
    struct test example;

    ptr = &example;

    example.single = 10;
    printf("%d\n", example.single);

    (*ptr).single = 11;
    printf("%d\n", example.single);

    ptr->single = 7;
    printf("%d\n", example.single);
    
    return 0;

}
