#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//�޸��Ҵ�� ���õ� ���̺귯��
#include <string.h>

//struct student {
//	int num;
//	double grade;
//};
//int main(void)
//{
//	struct student s1;
//	s1.num = 2;
//	s1.grade = 2.7;
//	printf("�й�:%d,����:%.1lf", s1.num, s1.grade);
//	return 0;
//}

//struct profile
//{
//	char name[20];
//	int age;
//	double height;
//	char* intro;
//};
//int main(void)
//{
//	struct profile yuni;
//	strcpy(yuni.name,"������");
//	yuni.age = 17;
//	yuni.height = 164.5;
//	yuni.intro = (char*)malloc(80);
//	printf("�ڱ�Ұ�:");
//	gets(yuni.intro);
//	printf("�̸�:%s\n", yuni.name);
//	printf("����:%d\n", yuni.age);
//	printf("Ű:%.1lf\n", yuni.height);
//	printf("�ڱ�Ұ�:%s\n", yuni.intro);
//	free(yuni.intro);
//
//	return 0;
//}

//struct profile
//	{
//		int age;
//		double height;
//	};
//struct student
//{
//	struct profile pf;
//	int id;
//	double grade;
//};
//int main(void)
//{
//	struct student yuni;
//	yuni.pf.age = 18;
//	yuni.pf.height = 168.5;
//	yuni.id = 315;
//	yuni.grade = 4.3;
//	printf("����:%d\n", yuni.pf.age);
//	printf("Ű:%.1lf\n", yuni.pf.height);
//	printf("�й�:%d\n", yuni.id);
//	printf("����:%.1lf\n", yuni.grade);
//
//	return 0;
//}

//struct student {
//	int id;
//	char name[20];
//	double grade;
//};
//int main(void)
//{
//	struct student	s1 = { 315,"ȫ�浿",2.4 },
//					s2 = { 316,"�̼���",3.7 },
//					s3 = { 317,"�������",4.4 };
//	struct student max;
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//	printf("�й�:%d\n", max.id);
//	printf("�̸�:%s\n", max.name);
//	printf("����:%.1lf\n", max.grade);
//	return 0;
//}

//int main(void) {
//    int num1=3, num2=2;
//    int answer = 0;
//    double a, b;
//    a = num1 / (double)num2;
//    b = a * 1000;
//    answer = (int)b;
//    printf("%d", answer);
//    return answer;
//}

struct vision
{
	double left;
	double right;
};
struct vision exchange(struct vision rb);
int main(void)
{
	struct vision rb;
	printf("�÷��Է�:");
	scanf("%lf%lf", &(rb.left), &(rb.right));
	rb = exchange(rb);
	printf("�ٲ�÷�: % .1lf % .1lf\n", rb.left, rb.right);
}
struct vision exchange(struct vision rb)
{	
	double temp;
	temp = rb.left;
	rb.left = rb.right;
	rb.right = temp;
	return rb;
}
