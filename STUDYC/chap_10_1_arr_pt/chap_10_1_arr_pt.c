#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세번째 배열 요소에 키보드 입력:");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}*/

	/*int ary[3];
	int i;
	int *pa =ary;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}*/

	/*int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값:");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", *pa);
		pa++;
	}*/

	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa:%u\n", pa);
	printf("pb:%u\n", pb);
	pa++;
	printf("pb-pa:%u\n", pb - pa);

	printf("앞에 있는 배열요소의 값 출력:");
	if (pa < pb)printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}