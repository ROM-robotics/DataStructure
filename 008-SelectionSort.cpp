#include <stdio.h>
void selectionSort(int arr[], int array_size);
int main()
{
    int arr[] = {8,9,7,-9,6,4,3,2,1};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    
    for(int j=0; j<array_size; j++)
    {
        printf("%d", arr[j]); printf(", ");
    }
    printf("\n");

    selectionSort(arr,array_size);

    return 0;
}
// small to large
void selectionSort(int arr[], int array_size)
{
    int tmp;
    for(int i=0;i<array_size-1;i++)
    {
        int min = i;
        for( int j=array_size-1; j>min; j--)
        {
            if(arr[j] < arr[min]) { tmp=arr[min]; arr[min]=arr[j]; arr[j]=tmp; }
        }
    }

    for(int k=0; k< array_size; k++ )
    {
        printf("%d", arr[k]); printf(", ");
    }
    printf("\n");
}