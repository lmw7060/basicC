#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void print_ary(int* pa, int size);
//
//int main(void)
//{
//	int ary1[5] = { 10,20,30,40,50 };
//	int ary2[7] = { 10,20,30,40,50,60,70 };
//
//	print_ary(ary1, 5);
//	printf("\n");
//	print_ary(ary2, 7);
//
//	return 0;
//}
//
//void print_ary(int* pa, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d\t", pa[i]);
//	}
//}

//void input_ary(double* pa, int size);
//double find_max(double* pa, int size);
//
//int main(void)
//{
//	double ary[5];
//	double max;
//	int size = sizeof(ary) / sizeof(ary[0]);
//	input_ary(ary, size);
//	max = find_max(ary, size);
//	printf("배열의 최댓값:%.1lf\n", max);
//
//	return 0;
//}
//
//void input_ary(double* pa, int size)
//{
//	int i;
//
//	printf("%d개의 실수값 입력:", size);
//	for (i = 0; i < size; i++)
//	{
//		scanf("%lf", pa + i);
//	}
//}
//
//double find_max(double* pa, int size)
//{
//	double max;
//	int i;
//
//	max = pa[0];
//	for (i = 1; i < size; i++)
//	{
//		if (pa[i] > max) 
//			max = pa[i];
//	}
//	return max;
//}