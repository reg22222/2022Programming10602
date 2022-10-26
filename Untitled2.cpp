#include <stdio.h>

int main(void)
{
	/*
	int score[6]; 
	
	int score[0] = 10;
	int score[1] = 33;
	int score[2] = 50;
	int score[3] = 88;
	int score[4] = 90;
	int score[5] = 100;
	char alpha[50];
	char str[6];
	
	int arr1[5] = {1,2,3};
	
	int arr2[7] = {0,};
	*/
	/*
	int i;
	
	int num[3];
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	
	for(i = 0 ; i < 3; i++)
	{
		printf("num[%d] = %d\n",i , num[i]);
	}
	*/
	/*
	int a[5] , i;
	
	for(i = 0; i<5 ;i++)
	{
		a[5] = 5;
	}
	printf("a[5]: %d\n",a[5]);
	printf("a[7]: %d\n",a[7]);
	*/
	/*
	int data[6], i;
	
	for(i = 0; i<6 ; i++)
	{
		printf("정수를 입력 : ");
		scanf("%d", &data[i]);
	}
	for(i = 5 ; i >= 0 ; --i)
	{
		printf("%d ",data[i]);
	}
	
	*/
	/*
	int score[5];
	int i, sum = 0;
	for(i = 0; i<5 ; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력 : ",i+i);
		scanf("%d", &score[i]);
	}
	for(i = 0; i< 5; i++)
	{
		sum += score[i];
	}
	printf("총점 : %d\n",sum);
	printf("평균 : %.2f\n",(float)sum/5);
	*/
	
	int score[5];
	int i, max = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력 : ",i+1);
		scanf("%d",&score[i]);
	}
	for(i = 0; i < 5; i++)
	{
		if(max < score[i])
			max = score[i];
	
	}
	printf("최고 점수 : %d\n",max);
}
