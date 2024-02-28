//배열을 사용하는 이유
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/
	int score[5];
	int i;
	int total=0;
	double avg;
	
	for (i = 0; i < 5; i++)
	{
		if (i == 0) 
		{
			printf("국어:");
		}
		else if(i ==1)
		{
			printf("수학:");
		}
		else if (i == 2)
		{
			printf("영어:");
		}
		else if (i == 3)
		{
			printf("사회:");
		}
		else
		{
			printf("과학:");
		}
		if (scanf_s(" %d", &score[i]) != 1)
		{
			printf("정수값입력하시오.");
			return 1;
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균: %.1lf\n", avg);

	return 0;
}