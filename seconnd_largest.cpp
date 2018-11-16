#include <stdio.h>
int main()
{
    int arr[9], i,first=0, second=0;
    printf("Enter elements in the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first)
        {
            
            second = arr[i];
        }
    }

  printf("Second largest = %d",second);

    return 0;
}
