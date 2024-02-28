#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//메모리할당과 관련된 라이브러리
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
//	printf("학번:%d,학점:%.1lf", s1.num, s1.grade);
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
//	strcpy(yuni.name,"서하윤");
//	yuni.age = 17;
//	yuni.height = 164.5;
//	yuni.intro = (char*)malloc(80);
//	printf("자기소개:");
//	gets(yuni.intro);
//	printf("이름:%s\n", yuni.name);
//	printf("나이:%d\n", yuni.age);
//	printf("키:%.1lf\n", yuni.height);
//	printf("자기소개:%s\n", yuni.intro);
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
//	printf("나이:%d\n", yuni.pf.age);
//	printf("키:%.1lf\n", yuni.pf.height);
//	printf("학번:%d\n", yuni.id);
//	printf("학점:%.1lf\n", yuni.grade);
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
//	struct student	s1 = { 315,"홍길동",2.4 },
//					s2 = { 316,"이순신",3.7 },
//					s3 = { 317,"세종대왕",4.4 };
//	struct student max;
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//	printf("학번:%d\n", max.id);
//	printf("이름:%s\n", max.name);
//	printf("학점:%.1lf\n", max.grade);
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
	printf("시력입력:");
	scanf("%lf%lf", &(rb.left), &(rb.right));
	rb = exchange(rb);
	printf("바뀐시력: % .1lf % .1lf\n", rb.left, rb.right);
}
struct vision exchange(struct vision rb)
{	
	double temp;
	temp = rb.left;
	rb.left = rb.right;
	rb.right = temp;
	return rb;
}
