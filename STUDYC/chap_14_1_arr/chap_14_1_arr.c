//2�����迭�� ���� ���� - �����͸� ����ϴ� ����� �ش��ڷḦ ����/�����ϱ� ����
//���������� 1���� �迭�� ���� �޸𸮰� �Ҵ��
//sizeof(s) ==48byte	sizeof(s[0])==16byte*3=48byte
//sizeof(s[0]) == 16byte �� ���� ������
//sizeof(s[0])/sizeof(s[0][0]) == ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main(void)
//{
//	int i, j;
//	int s[3][4];//int[4]��,�迭���3��,�迭��Ҹ�s[0],s[1],s[2]
//	//�迭��Ҹ� == �κй迭�� == �κй迭�� �����ּ�
//	for (i = 0; i < 3; i++)
//	{
//	
//		for (j = 0; j < 4; j++)
//		{
//		scanf("%5d", &s[i][j]);//���ȣ�����ڴ� ���� ��Ÿ���Ƿ� �ּҿ����ڰ� �ʿ��ϴ�
//		}
//	}
//		return 0;
//}

//int main(void)
//{
//	int score[3][4];//int score[3][4]={0}; <-- �ʱ�ȭ
//	int total;
//	double avg;
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{	
//		printf("4������ �����Է�:");
//		for (j = 0; j < 4; j++)
//		{
//		scanf("%d", &score[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		total = 0;
//		for (j = 0; j < 4; j++)
//		{
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("����:%d,���:%.2lf\n", total, avg);
//	}
//	return 0;
//}

//int main(void)
//{
//	int num[3][4] =
//	{
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	int i, j;
//	for(i=0;i<3;i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char animal[3][20] = {"dog","bird","cat"};
//	int i;
//	int count;
//	//char animal[0] = "rat";//�� �κй迭�� �����ּ��� ��.�ּһ���� �ּһ���� �����Ҽ�����. Rvalue�� Rvalue.
//	strcpy(animal[2], "rat");//cat�� rat����
//
//	count = sizeof(animal) / sizeof(animal[0]);
//	/*for (i = 0; i < count; i++)
//	{
//		scanf("%s", animal[i]);
//	}
//	for(i=0;i<count;i++)
//	{
//		printf("%s\t", animal[i]);
//	}*/
//	return 0;
//}

//int main(void)
//{
//	char animal1[5][10] =
//	{
//		{'d','o','g'},
//		"tiger",
//		"rabbit",
//		"horse",
//		"cat"
//	};
//	char animal2[][10] = { "dog","tiger","rabbit","horse","cat" };
//	int i;
//	for(i = 0; i < 5; i++)
//	{
//		printf("%s", animal1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s", animal2[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	int score[2][3][4] =
//	{
//		{{72,80,95,60},{72,80,95,60},{72,80,95,60}},
//		{{72,80,95,60},{72,80,95,60},{72,80,95,60}}
//	};
//int i, j, k;
//for (i = 0; i < 2; i++)
//{
//	printf("%d�� ����...\n", i + 1);
//	for (j = 0; j < 3; j++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%5d", score[i][j][k]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//}
int main(void) {
	int arr[2][3][4];
	int i, j, k;
	for (i = 0; i < 2; i++)
	{	
		for (j = 0; j < 3; j++) 
		{
			for (k = 0; k < 4; k++) 
			{
				printf("������ġ�ÿ�.");
				scanf("%d",&arr[i][j][k]);//�ּҰ� �ֱ�!
			}	
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}