//�������� - call by value
//�ּҸ� ���� - call by reference
//�ּҸ� ��ȯ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ּҰ��� ��ȯ
//int* sum(int a, int  b);//int* - �޸𸮰� ��ȯ�� �ǹǷ� sum���� �޾ƿ´�
//int main(void)
//{
//	int* resp;//int* - �ּҰ����� �޾ƿ;���
//	resp = sum(10, 20);
//	printf("�� ������ ��:%d\n", *resp);
//	return 0;
//}
//int* sum(int a, int b)
//{
//	static int res;	//�Լ����� ����Ϸ�Ǹ� �޸𸮰� ��ȯ�ǹǷ� static���� �����Ͽ� �޸� �������� �ʵ����ϴ°�
//	res = a + b;
//	return &res;
//}

//������������
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
//	printf("�� ���� �Է�:");
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
//	printf("�� ���� ���:%d,%d", a, b);
//}
