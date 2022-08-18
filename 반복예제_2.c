#include <stdio.h>
 
int main(void)
{
	
	int i, n,start, sum = 0;
	printf("첫번째 수 : ");
	scanf("%d",&i);
	start = i;
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d",&n);
	
	while(i <= n)
	{
		sum+=i;
		i++;
	}
	printf("%d부터%d까지의 합은 %d입니다.\n",start,n,sum);
	
}
