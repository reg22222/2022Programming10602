#include <stdio.h>
#include <stdlib.h>
#include <time.h>

exam1(void)
{
	int n = 1, sum = 0;
	
	while(1)
	{
		sum+=n;
		if(sum >= 100) break;
		n++;
	}
	printf("sum = %d, n = %d\n", sum , n);
} 

exam2(void)
{
	int n, count = 0, sum = 0;
	
	do
	{
		scanf("%d",&n);
		count++;
		if(n < 1) continue;
		sum+=n;
	}while( count <= 5);
	printf("합계 : %d \n",sum);
} 

exam3(void)
{
	int n, a;
	
	printf("4자리수 입력");
	scanf("%d",&n);
	
	do {
		a = n % 10;
		printf("%d",a);
		n = n/10;
		
		
	}while(n > 0);
} 

exam4(void)
{
	int n, a1 = 0, a2 = 1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++)
	{
		printf("%d ",a1);
		a3 = a1 + a2;
		
		a1 = a2;
		a2 = a3;
	}
	
} 

exam5(void)
{
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand() % 100+1;
	
	do
	{
		printf("1부터 100까지 숫자를 맞춰보세요>> ");
		scanf("%d",&guess);
		cnt++;
		
		if(guess < answer )
		{
			printf("제시한 숫자가 높습니다.\n");
		}
		else if(guess > answer)
		{
			printf("제시한 숫자가 낮습니다.\n");
		}
	}while(guess != answer);
	printf("축하합니다! 정답은 %d이고, 시도횟수 = %d\n",answer, cnt);
}

exam6(void)
{
	int a, b, temp, i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for( i = a ; i <= b ; i++)
		printf("%d",i);
}

exam7(void)
{
	int i;
	
	for(i = 1 ; i <= 25 ; i++)
	{
		printf("%3d",i);
		if( i % 5 == 0) printf("\n");
	}
}

exam8(void)
{
	int num;
	while(1)
	{
		printf("숫자입력 : ");
		scanf("%d",&num);
		if(num<0) break;
		if(num == 0) continue;
		if(num % 2 == 0)
			printf("짝수\n");
		else
			printf("홀수\n");
	}
}

exam9(void)
{
	
	int i, j;
	for(i = 1 ; i <= 5 ; i++ )
	{
		for(j = 1 ; j < i ; j++)
		{
			printf("0");
		}
		printf("*\n");
	}
}

exam10(void)
{
	int i, j;
	while( i <=5 )
	{
		j = 1;
		while( j<i )
		{
			printf("0");
			j++;
		}
		printf("*\n");
		i++;
	}	
}
	
exam11(void)
{
	int n, i, jumsu;
	int max = 0, min = 100;
	printf("학생수를 입력하세요 : ");
	scanf("%d",&n);
	printf("점수를 입력하세요(0~100) : ");
	
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&jumsu);
		if(jumsu>max) max = jumsu;
		else if(jumsu<min) min = jumsu;
	} 
	printf("1등은 %d점, 꼴지는 %d점\n",max,min);
	
}
	
exam12(void)
{
	int i, j;
	for(i=1; i<=9; i++)
	{
		for(j = 2 ; j<=9 ; j++)
			printf("%2d *%2d = %2d\t",j,i,i*j);
		printf("\n");
	}
	
}

exam13(void)
{
	int num;
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("1을입력\n");
			break;
		case 2:
			printf("2을입력\n");
			break;
		case 3:
			printf("3을입력\n");
			break;
		default:
			printf("입력오류\n");
			break;
	}
}

exam14(void)
{
	int i, j;
	for(i = 2; i <= 4; i++)
	{
		for(j=5;j <= 7; j++)
		{
		}
	} 
	printf("%d X %d = %2d",j,i,i*j); 
}

exam15(void)
{
	
}	



int main(void)
{
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
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
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
		}
	}
}

