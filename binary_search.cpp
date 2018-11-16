#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int a[9] = {5, 7, 8, 9 , 20, 21, 54, 67, 89, 93};
    int i,high=9,middle=0,low=0;

 
    printf("enter element:");
    scanf("%d",&i);
 
    while (low <= high)
    {
        middle = low + (high - low)/2;
        if (a[i] > a[middle])
            low = middle + 1;
        else if (a[i] < a[middle])
            high = middle - 1;
        else
           printf("The element %d was found at %d ",k,middle);
    }
 
 
 

