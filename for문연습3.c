#include <stdio.h>

int func1(void)
{
	printf("����8\n");
	int i, n, fact = 1;
	printf("���� �Է� :");
	scanf("%d",&n);
	
	for(i = 1 ; i <= n ; i++)
	{
		fact*=i;
	}
	printf("%d! = %d\n", n, fact);
}

int func2(void)
{
	printf("����8\n");
	int i, dan;
	printf("���ϴ� ����?");
	scanf("%d",&dan);
	
	printf("\n*** %d�� ***\n",dan);
	for(i = 1 ; i <= 9 ; i++)
	{
		printf("%d * %d = %d\n",dan , i, dan*i);
	}
}

int func3(void)
{
	int n1, n2, i;
	printf("�μ� �Է� : ");
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
	
	printf("������� ���� �� ���� �Է� : ");
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
		printf("��� ����? :");
		scanf("%d" ,&no);
		printf("%d������\n",no);
		switch(no)
		{
			case 1:func1();break;
			case 2:func2();break;
			case 3:func3();break;
			case 4:func4();break;	
			default:
				printf("�߸��Է�\n");
				return(0);
		}
	}
}

 


