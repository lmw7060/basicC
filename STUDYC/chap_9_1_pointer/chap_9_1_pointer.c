//������: �ּҰ��� �����ϴ� ����,�޸�����,�����ּҸ� ���,������� �ּҰ����
//�����͸� ���� ���� : �Լ����� �迭�� ���� ����,������ �� �ʿ䤻
//�޸� ���� ���� :byte
//ex)int 4byte �Ҵ�� 100�������� 103�������� �Ҵ�Ǹ� �����ּ� 100���� ����.
//�޸𸮸� �ݳ���

#include <stdio.h>

int main(void)
{
	int a;
	double b=3.5;
	char c;
	int* pa;
	double* pb;
	pa = &a;//pa:a�� �ּҰ� +a�� ����� ������Ÿ��/
			//&a-->���:����(+������Ÿ��)
	pb = &b;
	a = 10;
	a += 20;
	printf("%d\n", a);		//==*&a
	printf("%d\n", *pa);	//�������������� ==*&a
	printf("int������ �ּ�:%d\n", &a);
	printf("int������ �ּ�:%u\n", &a);
	printf("int������ �ּ�(%%d):%d\n", &a);
	printf("int������ �ּ�(%%u):%u\n", &a);
	printf("int������ �ּ�(%%p):%p\n", &a);//16���� �ּ�ǥ������
	printf("b:%lf\n", b);
	printf("\&b:%lf\n", *&b);
	printf("\pb:%lf\n", *pb);
	printf("b���ּ�:%p\n", &b);


	/*printf("int�� ������ �ּ�: %u\n", &a);
	printf("double�� ������ �ּ�: %u\n", &b);
	printf("char�� ������ �ּ�: %u\n", &c);
	
	printf("int�� ������ �ּ��� ������: %u\n", sizeof( & a));
	printf("double�� ������ �ּ��� ������: %u\n", sizeof( & b));
	printf("char�� ������ �ּ��� ������: %u\n",sizeof(&c));*/

	//int a;
	//int* pa;

	//pa = &a;
	//*pa = 10;//*pa �� *&a �� ���� a�Ͱ���.

	//printf("�����ͷ� a�� ���:%d\n", *pa);
	//printf("���������� a�� ���:%d\n", a);
	
	


	return 0;
}