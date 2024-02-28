//값을복사 - call by value
//주소를 전달 - call by reference
//주소를 반환
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//주소값을 반환
//int* sum(int a, int  b);//int* - 메모리가 반환이 되므로 sum으로 받아온다
//int main(void)
//{
//	int* resp;//int* - 주소값으로 받아와야함
//	resp = sum(10, 20);
//	printf("두 정수의 합:%d\n", *resp);
//	return 0;
//}
//int* sum(int a, int b)
//{
//	static int res;	//함수블럭이 실행완료되면 메모리가 반환되므로 static으로 선언하여 메모리 해제되지 않도록하는것
//	res = a + b;
//	return &res;
//}

//도전실전예제
//void input_data(int* pa, int* pb);
//void swap_data(void);
//void print_data(int a, int b);
//int a, b;
//int main(void)
//{
//	input_data(&a, &b);
//	swap_data();
//	print_data(a, b);
//}
//
//void input_data(int* pa, int* pb)
//{	
//	printf("두 정수 입력:");
//	scanf("%d%d", &a, &b);
//	return &a,&b;
//}
//
//void swap_data(void)
//{
//	int res = 0;
//	res = a;
//	a = b;
//	b = res;
//}
//
//void print_data(int a, int b)
//{
//	printf("두 정수 출력:%d,%d", a, b);
//}
