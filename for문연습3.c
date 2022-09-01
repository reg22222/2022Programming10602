#include <stdio.h>

int func1(void)
{
	printf("예제8\n");
	int i, n, fact = 1;
	printf("숫자 입력 :");
	scanf("%d",&n);
	
	for(i = 1 ; i <= n ; i++)
	{
		fact*=i;
	}
	printf("%d! = %d\n", n, fact);
}

int func2(void)
{
	printf("예제8\n");
	int i, dan;
	printf("원하는 단은?");
	scanf("%d",&dan);
	
	printf("\n*** %d단 ***\n",dan);
	for(i = 1 ; i <= 9 ; i++)
	{
		printf("%d * %d = %d\n",dan , i, dan*i);
	}
}

int func3(void)
{
	int n1, n2, i;
	printf("두수 입력 : ");
	scanf("%d %d", &n1, &n2);
	if(n1 < n2)
	{
		for(i = n1 ; i <= n2 ;i++)
			printf("%d ",i);
	}
	else
	{
		for(i = n2 ; i <= n1 ;i++)
		printf("%d ",i);
	}
}

int func4(void)
{
	int num1, num2, i;
	
	printf("공배수를 구할 두 정수 입력 : ");
	scanf("%d %d",&num1,&num2);
	
	for(i = 1 ; i <=100 ; i ++)
	{
		if(i % num1 == 0 && i % num2 == 0)
		{
			printf("%d ",i);
		}
	}
} 


int main(void)
{

	int no;
	while(1)
	{
		printf("몇번 문제? :");
		scanf("%d" ,&no);
		printf("%d번문제\n",no);
		switch(no)
		{
			case 1:func1();break;
			case 2:func2();break;
			case 3:func3();break;
			case 4:func4();break;	
			default:
				printf("잘못입력\n");
				return(0);
		}
	}
}

 


