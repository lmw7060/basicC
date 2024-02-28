#include <stdio.h>

//struct score {
//	int kor;
//	int eng;
//	int math;
//};
//int main(void)
//{
//	struct score yumi = { 90,80,70 };
//	struct score* ps = &yumi;
//	printf("국어1:%d\n", (*ps).kor);
//	printf("국어2:%d\n", yumi.kor);
//	printf("영어1:%d\n", ps->eng);
//	printf("영어2:%d\n", yumi.eng);
//	printf("수학1:%d\n", ps->math);
//	printf("수학2:%d\n", yumi.math);
//}

//struct address
//{
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//int main(void)
//{
//	struct address list[5] =
//	{
//		{"홍길동",23,"111-1111","울릉동 독도"},//list[0]임
//		{"이순신",35,"222-2222","서울 건천동"},
//		{"장보고",19,"333-3333","완도 청해진"},
//		{"유관순",15,"444-4444","충남 천안"},
//		{"안중근",45,"555-5555","황해도 해주"}
//	};
//	for(int i=0;i<5;i++)
//	{
//		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//		//list[i] - 배열요소명임
//	}
//	return 0;
//}

//struct address {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//void print_list(struct address* lp);
//int main(void)
//{
//	struct address list[5] =
//			{
//				{"홍길동",23,"111-1111","울릉동 독도"},//list[0]임
//				{"이순신",35,"222-2222","서울 건천동"},
//				{"장보고",19,"333-3333","완도 청해진"},
//				{"유관순",15,"444-4444","충남 천안"},
//				{"안중근",45,"555-5555","황해도 해주"}
//			};
//	print_list(list);
//	return 0;
//}
//void print_list(struct address* lp)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%10s%5d%15s%20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
//		printf("%10s%5d%15s%20s\n", lp[i].name,lp[i].age,(*(lp+i)).tel,(*(lp+i)).addr);
//	}
//}

//struct list 
//{
//	int num;
//	struct list* next;
//};
//int main(void)
//{
//	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
//	struct list* head = &a, * current;
//	a.next = &b;
//	b.next = &c;
//	printf("head->num:%d\n", head->num);
//	printf("head->next->num:%d\n", head->next->num);
//	printf("list all:");
//	current = head;
//	while (current != NULL)
//	{
//		printf("%d   ", current->num);
//		current = current->next;
//	}
//	printf("\n");
//	return 0;
//}