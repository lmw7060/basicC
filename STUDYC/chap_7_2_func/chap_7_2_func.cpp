#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수가 없는 함수-------------------------------------------------------------------------------------------------
//int get_num(void);
//
//int main(void)
//{
//	int result;
//	result = get_num();
//	printf("반환값:%d\n", result);
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//	printf("양수입력:");
//	scanf("%d", &num);
//	while (num < 0) {
//		printf("양수를 입력하세여:");
//		scanf("%d", &num);
//	}
//	return num;
//}

//반환값이 없는 함수----------------------------------------------------------------------------------------------
//void print_char(char ch, int count);
//int main(void)
//{
//	print_char('@', 9);
//	return 0;
//}
//void print_char(char ch, int count)
//{
//	int i;
//	if (count > 10) return;//조건에 맞은함수 실행 종료
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	return;
//}

//매개변수와 반환값이 모두 없는 함수----------------------------------------------------------------------
//void print_line(void);
//int main(void)
//{
//	print_line();
//	printf("학번	이름	전공	학점\n");
//	print_line();
//	return 0;
//}
//void print_line(void)
//{
//	int i;
//	for (i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}

//재귀함수---------------------------------------------------------------------------------------------
//void fruit(void);
//int main(void)
//{
//	fruit();
//	return 0;
//}
//void fruit(void)
//{
//	printf("apple\n");
//	fruit();
//}

//3번 실행되는 재귀호출함수------------------------------------------------------------------------------
//void fruit(int count);
//int main(void)
//{
//	fruit(1);
//	return 0;
//}
//void fruit(int count)
//{
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count + 1);
//	printf("jam\n");
//}

//확인문제
//void sum(int a);
//int main(void)
//{
//	sum(10);
//	sum(100);
//	return 0;
//}
//
//void sum(int a)
//{
//	int x,y=0;
//	while (x <= a) {
//		y += x;
//		x++;
//	}
//	printf("%d,%d", x,y);
//}
