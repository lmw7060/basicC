//���ڿ�
//���ڿ� ���:"apple" -->(������)apple�� ����� �����ּҰ����� ���� .100����

//���ڿ�-(������)���ڿ� �����ּ� ��-->�����ͻ��
//scanf()-������ ������ ���ڿ� �Է½� ���� �������� ���,���ۿ����÷ο�
// %c�� ��� - ȭ��Ʈ�����̽��Էµ� -->�����ϱ� ���� %c�տ� ���鹮�ڸ� �־��ش� �Ǵ� \n,\t
//getchar(),putchar()-�������� ������Լ� int�� ����(ctrl+z����)ȭ��Ʈ �����̽� �Էµ�
//gets()-������ ������ ���ڿ� ���.(\n����), ���ۿ����÷ο� �߻� ���ɼ�
//puts()-���ڿ� ���
//fgets()-���ۿ����÷ο�߻�x,fgets(�������ġ,sizeof(�迭),stdin),(�迭�� ������-1)����
//�Է��� +\n
//ǥ���Է��Լ�:scanf(),getchar(),gets(),fgets() --> �������۸� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//printf("apple ���:%s\n", "apple");	//���ڿ���� -->�����ͻ��
	//printf("apple ���:%s\n", "apple"+1);	//�����Ϳ���� ����
	//printf("apple ���:%s\n", "apple"+2);

	
	//printf("apple�� �����ּҰ�:%p\n", "apple");
	//printf("apple�� �����ּҰ�:%p\n", "apple"+1);
	//printf("ù��° ����:%c\n", *"apple");
	//printf("�ι�° ����:%c\n", *("apple" + 1));
	//printf("3��° ����:%c\n", *("apple" + 2));
	//printf("4��° ����:%c\n", *("apple" + 3));
	//printf("5��° ����:%c\n", *("apple" + 4));
	//printf("6��° ����:%c\n", *("apple" + 5));

	//printf("�迭�� ǥ���� ����° ����: %c\n", "apple"[2]);//���ڿ������ char�迭ó�� ��밡��

	//char* dessert = "apple";

	///*printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	//dessert = "banana";
	//printf("���� �Ľ��� %s�Դϴ�.\n", dessert);*/
	//while (*dessert != '\0')
	//{
	//	printf("%s\n", dessert);
	//	//putchar(*dessert);
	//	dessert++;
	//}

	//char str[80];
	//printf("���ڿ��Է�:");
	//scanf("%s", str);
	//printf("ù ��° �ܾ�:%s\n", str);
	//scanf("%s", str); //�Է¹��� �ʾ����� �տ��� �Էµ� ������ ���ڿ� ��µ�
	////�� , scanf()�� ������ �ϸ� ���� ���� ���۸� Ȯ���� -->�����Ͱ� ������
	////-->�ü���� ������ �̾� -->Ű�����Է� -->���ۿ� ����
	//printf("���ۿ� ���� �ִ� �� ��° �ܾ�:%s\n", str);

	//gets() --- ���ڿ��� �Է¹޴� �Լ�,�����̽��� �Է°���,���ۿ����÷ο�
	//char str[20];	
	////scanf("%s", str);
	//gets(str);//apple�Է��ϸ� �������� '\n'�� �߰��ȴ�.
	//printf("%s\n", str);
	//printf("%d\n", str[5]);
	//���ۿ����÷ο� �ذ�� --> fgets():\n���� �Էµ�
	//ex)apple jam\n\0

	char str[20];
	fgets(str,sizeof(str),stdin);//apple\n --> 6��
	//printf("%s", str);//�Է½� �ǳ���\n\0
	//str[strlen(str) - 1] = '\0';
	//puts(str);
	printf("%d", strlen(str));//�� �������� ����
	//sizeof(str)�� �迭��ü�� ���� ��ȯ,strlen(str)�Էµ� ���ڿ��� ����(null����)

	return 0;
}