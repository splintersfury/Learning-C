#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int filedescrip;

    filedescrip = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);
    
    if (filedescrip < 0)
    {
        printf("The open operation failed....");
        return -1;
    }
    else
    {
        printf("The open operation succeeded!");
        return 0;
    }

}
