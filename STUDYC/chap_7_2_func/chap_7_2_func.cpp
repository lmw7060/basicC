#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű������� ���� �Լ�-------------------------------------------------------------------------------------------------
//int get_num(void);
//
//int main(void)
//{
//	int result;
//	result = get_num();
//	printf("��ȯ��:%d\n", result);
//	return 0;
//}
//
//int get_num(void)
//{
//	int num;
//	printf("����Է�:");
//	scanf("%d", &num);
//	while (num < 0) {
//		printf("����� �Է��ϼ���:");
//		scanf("%d", &num);
//	}
//	return num;
//}

//��ȯ���� ���� �Լ�----------------------------------------------------------------------------------------------
//void print_char(char ch, int count);
//int main(void)
//{
//	print_char('@', 9);
//	return 0;
//}
//void print_char(char ch, int count)
//{
//	int i;
//	if (count > 10) return;//���ǿ� �����Լ� ���� ����
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	return;
//}

//�Ű������� ��ȯ���� ��� ���� �Լ�----------------------------------------------------------------------
//void print_line(void);
//int main(void)
//{
//	print_line();
//	printf("�й�	�̸�	����	����\n");
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

//����Լ�---------------------------------------------------------------------------------------------
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

//3�� ����Ǵ� ���ȣ���Լ�------------------------------------------------------------------------------
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

//Ȯ�ι���
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
