//���ڿ͹��ڿ�
//���ڻ��,�ƽ�Ű��,%c,getchar(),putchar()
//�ƽ�Ű�ڵ� �� 0~127
//1byte-->8bit 01111111

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char aa = 'a';
	//printf("%d", 'a');//���ڻ�� �Է�:%d -->�ƽ�Ű��:97
	//printf("%d", sizeof('a'));//4byte--> ���ڻ���� �ƽ�Ű������ ����ǰ� �� �ƽ�Ű���� 97��
	//// �ش��ϴ� ���� ����Ÿ��(int)������ �ȴ�
	//printf("%d", sizeof(aa));//1byte
	//printf("%d", sizeof("a"));//a\0	2byte

	//char ch,ch2;
	//ch = 'a';//���ڻ��
	////ch = 97;
	//ch2 = 'A';
	//printf("%c\n", ch);
	//printf("%d\n", ch);
	//ch++;
	//printf("%c\n", ch);
	//printf("%d\n", ch);
	//
	//printf("ch2:%c\n", ch2);
	//printf("ch2:%d\n", ch2);
	//ch2++;
	//printf("ch2:%c\n", ch2);
	//printf("ch2:%d\n", ch2);
	//printf("%c\n", ch - ('a' - 'A'));//('a'-'A'):32   ch:98		98-32 =66(B)

	//char ch;
	//ch = 'a';//97
	/*while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}*/
	/*while (ch <= 'z')
	{
		printf("%d", ch);
		ch++;
	}*/

	//getchar()�Է�,putchar()���:���������Լ�
	//scanf()-�Է� -->�����̽��� ������ �Է½� �����̽��� �Է��������� ���	
	//char ch1, ch2;
	//int ch;
	//scanf("%c%c", &ch1, &ch2);//%c�� ����ڱ��� �Էµ�
	//scanf(" %c%c", &ch1, &ch2);//%c�տ� ''(����),\n,\t���� �Է� -->����
	////����:scanf()�� ��ȯ %d,%lf,%s�� ��� - ''(����),����(\n),tab(\t)-ȭ��Ʈ�����̽�
	//printf("%c%c\n", ch1, ch2);
	//printf("%d%d\n", ch1, ch2);//ȭ��Ʈ�����̽��� ���� ��� �ش��ϴ� �ƽ�Ű������ �Էµ�
	//printf("%d %d\n", ch1, ch2);

	//getchar():�Ѱ��� �����Է�  getchar()�� �ޱ� ������ int
	//ch = getchar();//a
	//printf("%c", ch);//a
	//putchar(ch);//int ������ ��������?ctrl+z --> -1�� �Էµ�
	//�� charŸ������ ����� ��� -1�� 255�� �����������ϹǷ� int�� ����
	//11111111 11111111 11111111 11111111 (-1) EOF
	//00000000 00000000 00000000 11111111 (255)

	//���ۻ���ϴ� �Է��Լ�
	//scanf()- ���۸� ���ؼ� �Էµ�
	//����:ǥ������� �� ���Ǵ� ����
	/*char ch;
	int i;
	for (i = 0; i < 6; i++) {

	scanf("%c",&ch);
	printf("%c",ch);
	}*/
	//����Ű���� �Է¹ް� ����ϴ� �Լ�
	/*char ch;
	int i;
	scanf("%c",&ch);
	while (ch != '\n')
	{
		printf("%c", ch);
		scanf("%c",&ch);
	}*/
	//char ch;
	//int res;
	//while (1)//ctrl+z �� �Է��ϴ� ���� -1���� �Ѿ���Ƿ�false�� �Ǿ� ����
	//{
	//	res = scanf("%c", &ch);
	//	if (res == -1) break;
	//	printf("%d", ch);
	//}
	//�Էµ� �� + \n(���๮��)
	//fflush()�Լ�:�Էµ� ������ ���� ����ִ� �Լ�
	
	//int a;
	//char ch;
	////scanf("%d", a);
	////printf("%d\n", a);
	//fflush(stdin);//stdin ǥ���Է��� ������ �����̸�
	//scanf("%c", &ch);
	//printf("%c", ch);

	int num, grade;

	printf("�й��Է�: ");
	scanf("%d", &num);
	getchar();//\n�� ���۷� ���� �о�� -->���۸� ����ִ� ȿ��

	//fflush(stdin);--2015���� ���������� ����
	printf("�����Է�: ");
	grade = getchar();
	printf("�й�:%d, ����%C", num, grade);

	return 0;
}