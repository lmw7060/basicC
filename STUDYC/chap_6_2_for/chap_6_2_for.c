//break - �ݺ����� ����������
//continue - �ݺ����� �ǳ� �۶�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
//1���� 10������ ���� ���ϴ� �Լ�
	/*int i, sum = 0;
	for(i=0;i<=10;i++)
	{
		sum += i;
		if (sum >= 30) break;
	}
		printf("%d %d", sum,i);*/

	//continue-----------------------------------------------------------------------------
	//1~100������ ��(3�ǹ�� ����)
	/*int i, sum = 0;
	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
			continue;
		sum += i;
	}
	printf("1~100������ ��:%d", sum);*/

	//3�ϋ� ���ѷ������� �ڵ�
	//int i = 0, sum = 0;
	//while (i<=100)
	//{
	//	if ((i % 3) == 0) continue;//i-->���ѷ����� ��
	//	sum += i;
	//	i++;
	//}

	//*****�� ����ϴ� ���α׷�
	/*int j,i;
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//�Ƕ�̵� ��
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