#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//	int* pi;
//	double* pd;
//	pi = (int*)malloc(sizeof(int));		//컴파일러호환성으로 인해
//	if (pi == NULL)
//	{
//		printf("# 메모리가 부족합니다.\n");
//		exit(1);
//	}
//	pd = (double*)malloc(sizeof(double));
//	if (pd == NULL)
//	{
//		printf("# 메모리가 부족합니다.\n");
//		exit(1);
//	}
//	*pi = 10;
//	*pd = 3.4;
//	printf("정수형으로 사용:%d\n", *pi);
//	printf("실수형으로 사용:%.1lf\n", *pd);
//	free(pi);
//	free(pd);
//	return 0;
//}

//int main(void)
//{
//	int* pi;
//	int i, sum = 0;
//	pi = (int*)malloc(5 * sizeof(int));		//&(pi+i)는 *pi
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다!\n");
//		exit(1);
//	}
//	printf("다섯 명의 나이를 입력하세요 :");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("다섯 명의 평균나이 %.1lf\n", (sum / 5.0));
//	free(pi);		//void*
//	return 0;
//}

//int main(void)
//{
//	int* pi;
//	int size = 5;
//	int count = 0;
//	int num, i;
//	pi = (int*)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("양수만 입력하세요 =>");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;		//count++ 맨처음에 0으로선언했으니까 0으로 시작해서 계속 실행될 때 증가됨
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//	}
//	free(pi);
//	return 0;
//}

int main(void)
{
	char temp[80];
	char* str[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세여:");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		if (str[i] == NULL) {
			printf("동적할당 실패함");
		}
		strcpy(str[i], temp);

	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}
	return 0;
}