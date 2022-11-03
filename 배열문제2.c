#include <stdio.h>
#include <string.h>
void exam9()
{
	char str[10];
	printf("당신의 이름은 무엇입니까? :");
	scanf("%s",str);
	printf("안녕하세요 %s님\n",str);
}

void exam10()
{
	 int i;
	 char str[] = "Good Time";
	 for(i = 0 ; i <=sizeof(str) ; i++)
	 	printf("str[%d] = %s\n",i,str[i]);
}

void exam11()
{
	char str[6] = "apple";
	int i = 0;
	
	printf("한 문자씩 출력\n");
	while(str[i]!=NULL)
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n\n문자열로 한꺼번에 출력\n");
	printf("%s",str);
}

void exam12()
{
	char a[] = "Seoul Robotics";
	printf("%s\n",a);
	a[5] = NULL;
	printf("%s\n",a);
}

void exam13()
{
	char voca[50];
	int len = 0;
	printf("영단어 입력 : ");
	scanf("%s",voca);
	
	while(voca[len]!= NULL)
	{
		len++;
	}
	printf("입력한 영단어의 길이는 %d\n",len);
}

void exam14()
{
	char voca[50];
	int len = 0;
	printf("영단어 입력 : ");
	scanf("%[^\n]s",voca);
	
	while(voca[len]!= NULL)
	{
		len++;
	}
	printf("입력한 영단어의 길이는 %d\n",len);
}

void exam15()
{
	char str[100];
	int i;
	fflush(stdin);
	gets(str);
	printf("str의 문자길이 : %d\n",strlen(str));
	
	for(i = strlen(str)-1 ; i >= 0 ; i--)
		printf("%c",str[i]);
}

void exam16()
{
	
}

main()
{
	int num;
	while (1)
	{
		printf("\n문제 번호: ");
		scanf("%d", &num);
		printf("%d번 문제========================================================================\n", num);
		switch (num)
		{

		case 9:
			exam9();
			break;
		case 10:
			exam10();
			break;
		case 11:
			exam11();
			break;
		case 12:
			exam12();
			break;
		case 13:
			exam13();
			break;
		case 14:
			exam14();
			break;
		case 15:
			exam15();
			break;
		case 16:
			exam16();
			break;
		default:
			return 0;
		}
	}
}
