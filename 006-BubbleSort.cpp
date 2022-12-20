#include <stdio.h>
void bubbleSort(int arr[], int array_size);
int main()
{
    int arr[] = {1,3,24,53,89,12,15,23,34,43,7,4,55,69,90,5};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    
    for(int j=0; j<array_size; j++)
    {
        printf("%d", arr[j]); printf(", ");
    }
    printf("\n");

    bubbleSort(arr,array_size);

    return 0;
}
// small to large
void bubbleSort(int arr[], int array_size)
{
    int i,j,k;
    for(int z=0;z<array_size;z++) 
    {
        for( i=0;i<array_size-1-z;i++ )
        {
            if( arr[i] >= arr[i+1] ) { k=arr[i];   arr[i]=arr[i+1];    arr[i+1] = k; }
            
        } 
    }

    for( j=0; j < array_size; j++ )
    {
        printf("%d", arr[j]); printf(", ");
    }
    printf("\n");
}