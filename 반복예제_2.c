#include <stdio.h>
 
int main(void)
{
	
	int i, n,start, sum = 0;
	printf("ù��° �� : ");
	scanf("%d",&i);
	start = i;
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&n);
	
	while(i <= n)
	{
		sum+=i;
		i++;
	}
	printf("%d����%d������ ���� %d�Դϴ�.\n",start,n,sum);
	
}
