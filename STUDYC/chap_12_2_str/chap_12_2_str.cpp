//strcpy()-���ڿ� ����/����,���ڿ� �ʱ�ȭ �� ���� ������ ��
//strncpy()-���ϴ� ������ ���ڸ� ����
//strcat()-���ڿ� ���̱�
//strlen()-���ڿ��� ���� ���
//strcmp()-�������� ��
//�迭�� �־ ó��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[20] = "strawberry";//�ѹ��� �̷��� �ʱ�ȭ ����
	//printf("%s", str1);
	///*str1[0] = 'a';
	//str1[1] = 'p';
	//str1[2] = 'p';
	//str1[3] = 'l';
	//str1[4] = 'e';
	//str1[5] = '\0';*/
	//strcpy(str1, "apple");//"apple"�� ���ڿ��� ����x -->�����ּҰ�
	//printf("%s\n", str1);

	//char str1[20] = "strawberry";
	//char str2[20] = "apple";
	//const char *ps1 = "banana";	//banana�� �����ּҰ��� �����Ϳ� ����
	//char* ps2 = str2;
	///*str1[0] = 'a';
	//str1[1] = 'p';
	//str1[2] = 'p';
	//str1[3] = 'l';
	//str1[4] = 'e';*///str1[5]='\0'�� ���������� appleberry�� ���
	//strcpy(str1, ps2);
	//printf("%s\n", str1);

	//strncpy()-------------------------------------------------------------------------------------------
	//strcpy():'\0'(null)����
	//char str[20] = "mangotree";
	////strcpy(str, "apple");//apple\0
	//strncpy(str, "apple-pie", 5);//apple-pie�� 5���ڸ� �����
	//printf("%s\n", str);

	//strcat()���ڿ����̱�--------------------------------------------------------------------------------
	/*char str[20] = "apple";
	strcat(str, "pie");
	printf("%s\n", str);
	strncat(str, "piece", 3);;
	printf("%s\n", str);*/

	//strlen()���ڿ��� ���� == �迭�� ����----------------------------------------------------------------
	//char str[20];
	//int len;
	//scanf("%s", str);//apple
	//printf("%d\n", sizeof(str));
	//printf("%d\n", strlen(str));

	//strcmp()�������� ��--------------------------------------------------------------------------------
	char str1[20] = "pear";
	char str2[20] = "peach";
	int res;
	strcmp(str1, str2);
	res = strncmp(str1, str2, 3);
	printf("res��:%d", res);
	
	return 0;
}