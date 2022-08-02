#include <stdio.h>
#include <stdlib.h>

//define structure
struct struct_name
{
    int integ1;
    char charac1;
    float floater1;
//give an instance of the structure the name 'example'
} ;

int main(void)
{
    struct struct_name example1, example2;
    example1.integ1 = 20;
    example1.charac1 = 76;
    example1.floater1 = 3.14;

    printf("This is the int: %d\n", example1.integ1);
    printf("This is the character: %c\n", example1.charac1);
    printf("This is the float: %.2f\n", example1.floater1);

    return 0;
}
