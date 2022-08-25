#include <stdio.h>

int main(void)
{
	int n, count = 0, sum = 0;
	do
	{
		scanf("%d",&n);
		if(n < 1)
		{
			continue;
		}
		sum+=n; 
		count++;
		
	} while( count < 5);
	
	printf("гу╟Х : %d : ",sum);
	
}
