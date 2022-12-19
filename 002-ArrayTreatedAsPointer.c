#include <stdio.h>

void fun(int arr[])
{
    // NOT WORK YOU SHOULD USE argument
    // int array_len = (int)(sizeof(arr)) / sizeof(arr[0]);
    // printf("Array Length = %d \n", array_len);
    // for(int i=0;i<array_len;i++)
    // {
    //     printf("The value is %d \n", arr[i]);
    // }
}
int main()
{
    int myArray[4] = {100,30,20,10};
    //fun( myArray );
    int array_len = sizeof(myArray) / sizeof(myArray[0]);
    printf("\033[1;36m Array Length \033 = %d , ArraySize = %ld , FirstIndexSize = %ld \n", array_len, sizeof(myArray), sizeof(myArray[0]));
}