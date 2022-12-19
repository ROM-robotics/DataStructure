#include <iostream>
int binarySearchIterate(int array[], int array_size, int search_number)
{   int low = 0;
    int high= array_size -1;
    while( low <= high)
    {
        int mid = ( low + high )/2;
        if( search_number == array[mid] ) { return mid; }
        else if( search_number < array[mid] ) { high = mid - 1; }
        else { low = mid + 1; }
    }

    return -1;
}
int binarySearchRecursive(int array[], int search_number, int min, int max)
{
    if(min>max) { return -1; }
    int mid = ( min+max )/2;
    if(search_number==array[mid]) { return mid; }
    else if (search_number < array[mid]) { return binarySearchRecursive(array,search_number,min,mid-1); }
    else { return binarySearchRecursive(array,search_number,mid+1, max);}
    return -1;
}
int main()
{
    int arr[10] = {1,3,12,15,23,34,43,55,69,90};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int number;

    printf("Please enter to search = ");
    scanf("%d", &number);

    // int  result_index = binarySearchIterate(arr, array_size, number);
    int  result_index = binarySearchRecursive(arr, number, 0, array_size-1);
    if( result_index != -1) { printf("Index number is %d\n", result_index); }
    else { printf("Number doesn't exist!\n"); }
    return 0;
}