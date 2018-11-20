#include<stdio.h>
#include<conio.h>
int main()
{
	
	void insertion_sort(int [],int);
	int a[10],i,n;
	
	n=10;
	printf("enter array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
insertion_sort(a,n);
printf("sorted array");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}
void insertion_sort(int a[],int N)
{
	int i=0,j=0,temp=0;

	for(i=0;i<N;i++){
			temp=a[i];
		for(j=i-1;j>=0;j--){
		
		if(a[j]>temp)
			a[j+1]=a[j];
		else
			break;}
		a[j+1]=temp;
	}
}
