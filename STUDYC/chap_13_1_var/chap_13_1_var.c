//��������(local) - �Լ����ȿ� ����,(auto)int a; -->�ʱ�ȭ,���ӿ� ������
//��������(global) - �Լ� �ۿ��� ����,�ʱ�ȭ --> 0(�ڵ�)
//���� ��������(static) - �����Ϳ���,���������� ������ �����Ⱓ �ٸ�,�ڵ��ʱ�ȭ,���������Ⱓ�� ��ü ���α׷� ����ñ���
//						���������� �Ϲ����� Ư¡�� ������ �Լ����� ����ʹ� ����
//�������ͺ���(register) - cpu�ȿ��� ���Ǵ� �޸�,�������� ���� ����,�ּҿ����� �Ұ���
//�Լ� �� ������ �޸� ���� ->ȣ��� ���� ->main()���ƿö� ��ȯ
//�������� ����� �ʱ�ȭ -> �׷��������� ������ �� ��
//�������� ����� - �޸𸮰����� ȿ����,�����(��������) ���� -��,main()���� ������ �Լ��� �� �ʿ����
//					main()�ӿ� ����� ������ �ܺο��� �������ٺҰ�->�Ű�����(�����ͺ��� ��)�� ���ؼ� ���ٰ���
//�������� ����� - �θ��⽱��(�� ������ ����)
//					������� ��ƴ�,�޸𸮰����� ��ȿ����->�����Ϳ���,������� �����϶� ����� ���� ��ü����
//					�Ǽ��� ���������� ���� �̸��� ���������� ������ ��� �������� ��� �Ұ�-->������ �������
#include <stdio.h>

//void assign(void);
//int main(void)
//{
//	auto int a = 0;
//	assign();
//	printf("main�Լ�a=%d\n", a);
//	return 0;
//}
//void assign(void)
//{
//	int a;
//	a = 10;
//	printf("assign�Լ� a:%d\n", a);
//}

//int main(void)
//{
//	int a = 10, b = 20;
//	printf("��ȯ �� a��b�� ��:%d,%d\n", a, b);
//	{
//		int temp;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	printf("��ȯ �� a��b�� ��: %d,%d\n", a, b);
//	//printf("%d",temp); --> ���� : �ڵ������ ������ ����
//	return 0;
//}

//void assign10(void);
//void assign20(void);
//int a;
//int main(void)
//{
//	printf("�Լ� ȣ�� ��a��:%d\n", a);
//	assign10();
//	assign20();
//	printf("�Լ� ȣ�� ��a��:%d\n", a);
//	return 0;
//}
//void assign10(void)
//{	
//	a = 10;
//}
//void assign20(void)
//{
//	int a;
//	a = 20;
//}

//void auto_func(void);
//void static_func(void);
//int main(void)
//{
//	int i;
//	printf("�Ϲ���������(auto)�� ����� �Լ� ...\n");
//	for (i = 0; i < 3; i++) 
//	{
//		auto_func();
//	}
//}
//
//void auto_func(void)
//{
//	auto int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func(void)
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}

//int main(void)
//{
//	register int i;
//	auto int sum = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	//printf("%p", &i);//�������ͺ����Ҵ�
//	return 0;
//}