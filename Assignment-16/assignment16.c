#include <stdio.h>


int main(void)
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("The memory address of array is: \n%p \n",arr);
    printf("The memory address of first element of array is: \n%p \n", &arr[0]);
    printf("The first element in the array is: \n%d \n", arr[0]);
    printf("The memory address of the second element of the array is: \n%p", &arr[1]);

    return 0;

}
