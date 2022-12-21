#include <stdio.h>
void insertionSort(int arr[], int array_size);
int main()
{
    int arr[] = {9,7,6,8,11,12,13,20,4};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    
    for(int j=0; j<array_size; j++)
    {
        printf("%d", arr[j]); printf(", ");
    }
    printf("\n");

    insertionSort(arr,array_size);

    return 0;
}
// small to large
void insertionSort(int arr[], int array_size)
{
    int tmp;
    int j;
    for(int i=1;i<array_size;i++)
    {
        j = i;
        while( j>0 && arr[j] < arr[j-1])
        {
            tmp =arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }
    }

    for( j=0; j < array_size; j++ )
    {
        printf("%d", arr[j]); printf(", ");
    }
    printf("\n");
}