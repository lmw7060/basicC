#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//	int* pi;
//	double* pd;
//	pi = (int*)malloc(sizeof(int));		//�����Ϸ�ȣȯ������ ����
//	if (pi == NULL)
//	{
//		printf("# �޸𸮰� �����մϴ�.\n");
//		exit(1);
//	}
//	pd = (double*)malloc(sizeof(double));
//	if (pd == NULL)
//	{
//		printf("# �޸𸮰� �����մϴ�.\n");
//		exit(1);
//	}
//	*pi = 10;
//	*pd = 3.4;
//	printf("���������� ���:%d\n", *pi);
//	printf("�Ǽ������� ���:%.1lf\n", *pd);
//	free(pi);
//	free(pd);
//	return 0;
//}

//int main(void)
//{
//	int* pi;
//	int i, sum = 0;
//	pi = (int*)malloc(5 * sizeof(int));		//&(pi+i)�� *pi
//	if (pi == NULL)
//	{
//		printf("�޸𸮰� �����մϴ�!\n");
//		exit(1);
//	}
//	printf("�ټ� ���� ���̸� �Է��ϼ��� :");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("�ټ� ���� ��ճ��� %.1lf\n", (sum / 5.0));
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
//		printf("����� �Է��ϼ��� =>");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;		//count++ ��ó���� 0���μ��������ϱ� 0���� �����ؼ� ��� ����� �� ������
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
		printf("���ڿ��� �Է��ϼ���:");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		if (str[i] == NULL) {
			printf("�����Ҵ� ������");
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