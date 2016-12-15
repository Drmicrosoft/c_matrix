#include <stdio.h> 

int main () 
{
	int x [10] = {1,2,3,1,2,3,1,2,3,1};
	
	for (int i = 0 ; i < 10 ; i++)
	{
		printf(" the value of x [%d] = %d\n",i,x[i]);
	}

for (int i = 0 ; i < 10 ; i++)
	{
	x[i]=i;
	printf(" INITIALIZING .. \n");
	}

for (int i = 0 ; i < 10 ; i++)
	{
		printf(" the value of x [%d] = %d\n",i,x[i]);
	}
}
