#include <stdio.h>

exam1(void)
{
	int num = 1, sum = 0;
	for(;;) 
	{
		sum = sum + num;
		printf("%d������ ��: %d\n",num,sum);
		num++;
		if(num > 5)break;
	}
} 

exam2(void)
{
	int i, j;
	for(i = 1 ; i <= 3 ; i++)
	{
		for(j = 1 ; j <=5 ; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
} 

exam3(void)
{
	int i,j,n;
	printf("����� �� �Է� : ");
	scanf("%d",&n);
	for(i = 1 ; i <=n ; i++)
	{
		for(j = 1 ; j <= i ;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
} 

exam4(void)
{
	  int i, j;
	  for(i=1 ; i<=5 ; ++i)
	  {
	  	for(j = 1 ; j <= i ; j++)
	  	{
	  		printf("*");
		}
		printf("\n");
	  }
	  for(i=1 ; i <=4 ; i++)
	  {
	  	for(j = 1 ; j <= 5-i ;j++)
	  	{
	  		printf("*");
		}
		printf("\n");
	  }
} 

exam5(void)
{
	/*
	int i, j;
	for(i = 2 ; i <= 9 ; i++)
	{
		for(j = 1 ; j <= 9 ; j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}*/
	
	int i, j;
	for(i = 1 ; i <= 9 ; i++)
	{
		for(j = 1 ; j <= 9 ; j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);
			
		}
		printf("\n");
		
	}
	
	
	
	
} 


int main(void)
{
	int no;
	
	while(1){
		printf("\n ���� �� ��? : ");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			
		}
	}
}

