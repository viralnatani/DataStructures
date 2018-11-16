#include <stdio.h>
 
void swap(int x,int y);

 
void main()
{
    int a[9] = {8,5,2,3,1,6,9,4,0,7};
 
      int i=0,j=0;
    for(i=0; i<10; i++)
    {
        for(j=0; j<(10-(i+1)); j++)
        {
            {
                if(a[j] > a[j+1])
                    swap(a[j],a[j+1]);
            }
 
        }
    }
    for(i = 0; i < 10; i++)
        printf("%d ",a[i]);
 
    printf("\n");
}
 
void swap(int x,int y)
{
    int temp;
    temp =x;
    x = y;
    y = temp;
}
 


 

