#include<iostream>
using namespace std;
int main()
{
	int op,n=10,top=0,var=0,i=0;
	int array[n];
	while(1)
	{
		cout << 1. push 2. pop 3. display
		switch(operation)
		{
			case 1:		
				
					for(int j=0; ;j++)
					{
						if(top==n-1)
					{
						cout << "overflow";
						break;
		 			} 
					else if(top== -1)
					{
						 top = 0;
					}
					cout<<"element to push : ";
					cin >> array[i];
					i++;
					top++;
						}
						
						
					}
					break;
			case 2:
		
		
					
					for(int k=0; k<top; k++)
					{
						if(top==-1)
					{
						cout << "stack is empty.";
		 			} 
					else
					{
						top=top-1;
					}
						cout << array[k] << endl;
					}
					break;
		
			case 3:
					for(int k=0; k<top; k++)
					{
						cout << array[k] << endl;
					}
					exit(0);
		}
	}
	
	
}
