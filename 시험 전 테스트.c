#include <stdio.h>
#include <stdlib.h>
#include <time.h>


exam1()
{
	int i=30;
	while(i >= 10)
	{
		printf("%d ",i);
		i= i-2;
	}
} 

exam2()
{
	int i,n, sum = 0;
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&n);
	
	while(i <= n)
	{
		sum+=i;
		i++;
	}
	printf("1���� %d������ �� : %d",n,sum);
	
} 

exam3()
{
	int i, sum = 0;
	
	while(1)
	{
		i++;
		if(i == 10) break;
		if(i % 5 == 0) continue;
		sum+=i;
	}
	printf("sum : %d",sum);
} 

exam4()
{ 
	int i, su, cnt=0;
	
	printf("���� �Է� : ");
	scanf("%d",&su);
	
	i =1;
	while(i <= su)
	{
		if(su % i == 0) cnt++;
		i++;
	}
	if(cnt == 2)
	{
		printf("%d�� �Ҽ���\n",su);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴ�\n",su);
	}
} 

exam5()
{
	int i, j;
	
	for(i = 1; i <= 5; ++i)
	{
		for(j = 1; j <= i ; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 4 ; i >= 1 ; --i)
	{
		for(j = 1 ; j <= i ; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	
} 

exam6()
{
	int n, a;
	
	printf("4�ڸ��� �Է� : ");
	scanf("%d",&n);
	
	do {
		a = n% 10;
		printf("%d",a);
		n = n/10;
	}while(n>0);
}

exam7()
{
	int n, a1 = 0, a2 = 1, a3, i;
	printf("�� ���� �ױ��� ���ұ��?");
	scanf("%d",&n) ;
	for(i = 0; i < n ; i++)
	{
		printf("%d ",a1);
		a3 = a2 + a1;
		a1 = a2;
		a2 = a3;
	}
}
exam8()
{
	int a, b, temp, i;
	printf("***�� �� ������ ���� ����ϱ� ***\n");
	printf("�� �� �Է� : ");
	scanf("%d %d",&a, &b);
	
	if(a >b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i =a ; i <= b; i++)
		printf("%d ",i);
}
exam9()
{
	int i, j;
	for(i = 1; i <=5 ; i++)
	{
		for(j = 1; j <i ; j++)
		{
			printf("o");
		}
		printf("*\n");
	}
}
exam10()
{
	int i = 1, j;
	
	while(i <= 5)
	{
		j = 1;
		while(j<i)
		{
			printf("o");
			j++;
		}
		printf("*\n");
		i++;
	}
}

exam11()
{
	int i, j;
	for(i=1; i<=9 ; i++)
	{
		for(j = 2; j<=5;j++);
			printf("%2d * %2d = %2d\t",j,i,i*j);
		printf("\n");
	}
	printf("\n");
	for(i = 1; i<=9 ; i++)
	{
		for(i = 6; j<=9;j++)
			printf("%2d *%2d = %2d\t",j,i,i*j);
		printf("\n");
	}
}
main(){
	int no;
	
	while(1){
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			case 11: exam11(); break;
		}
	}
}

