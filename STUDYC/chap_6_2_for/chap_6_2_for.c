//break - 반복문을 빠져나갈때
//continue - 반복문을 건너 뛸때
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
//1부터 10까지의 합을 구하는 함수
	/*int i, sum = 0;
	for(i=0;i<=10;i++)
	{
		sum += i;
		if (sum >= 30) break;
	}
		printf("%d %d", sum,i);*/

	//continue-----------------------------------------------------------------------------
	//1~100까지의 합(3의배수 제외)
	/*int i, sum = 0;
	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
			continue;
		sum += i;
	}
	printf("1~100까지의 합:%d", sum);*/

	//3일떄 무한루프도는 코드
	//int i = 0, sum = 0;
	//while (i<=100)
	//{
	//	if ((i % 3) == 0) continue;//i-->무한루프를 돔
	//	sum += i;
	//	i++;
	//}

	//*****를 출력하는 프로그램
	/*int j,i;
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//피라미드 별
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 1+i; j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
		return 0;
}