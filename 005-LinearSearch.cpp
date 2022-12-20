#include <iostream>

int linearSearch(int array[], int search_number, int arraySize)
{
    for(int i=0;i<arraySize;i++)
    {
        if( search_number==array[i]) { return i; }
    }
    return -1;
}
int main()
{
    int arr[10] = {1,3,12,15,23,34,43,55,69,90};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int number;

    printf("Please enter to search = ");
    scanf("%d", &number);

    int result_index = linearSearch(arr,number,array_size);
    
    if( result_index != -1) { printf("Index number is %d\n", result_index); }
    else { printf("Number doesn't exist!\n"); }
    return 0;
}