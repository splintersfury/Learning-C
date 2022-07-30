#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 3 | argc >3)
    {
        printf("Please include the right number of arguments, arg1 arg2");
    }
    else
    {
        printf("Hello, %s %s", argv[1], argv[2]);
    }


return 0;

}
