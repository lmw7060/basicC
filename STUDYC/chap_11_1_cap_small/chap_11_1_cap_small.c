//문자와문자열
//문자상수,아스키값,%c,getchar(),putchar()
//아스키코드 값 0~127
//1byte-->8bit 01111111

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char aa = 'a';
	//printf("%d", 'a');//문자상수 입력:%d -->아스키값:97
	//printf("%d", sizeof('a'));//4byte--> 문자상수는 아스키값으로 저장되고 그 아스키값인 97에
	//// 해당하는 값이 정수타입(int)저장이 된다
	//printf("%d", sizeof(aa));//1byte
	//printf("%d", sizeof("a"));//a\0	2byte

	//char ch,ch2;
	//ch = 'a';//문자상수
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

	//getchar()입력,putchar()출력:문자전용함수
	//scanf()-입력 -->스페이스바 같은것 입력시 스페이스바 입력전까지만 출력	
	//char ch1, ch2;
	//int ch;
	//scanf("%c%c", &ch1, &ch2);//%c는 제어문자까지 입력됨
	//scanf(" %c%c", &ch1, &ch2);//%c앞에 ''(공백),\n,\t값을 입력 -->무시
	////참고:scanf()의 변환 %d,%lf,%s의 경우 - ''(공백),엔터(\n),tab(\t)-화이트스페이스
	//printf("%c%c\n", ch1, ch2);
	//printf("%d%d\n", ch1, ch2);//화이트스페이스가 들어온 경우 해당하는 아스키값으로 입력됨
	//printf("%d %d\n", ch1, ch2);

	//getchar():한개의 문자입력  getchar()를 받기 변수를 int
	//ch = getchar();//a
	//printf("%c", ch);//a
	//putchar(ch);//int 변수에 받은이유?ctrl+z --> -1로 입력됨
	//즉 char타입으로 선언될 경우 -1과 255를 구분하지못하므로 int로 선언
	//11111111 11111111 11111111 11111111 (-1) EOF
	//00000000 00000000 00000000 11111111 (255)

	//버퍼사용하는 입력함수
	//scanf()- 버퍼를 통해서 입력됨
	//버퍼:표준입출력 시 사용되는 공간
	/*char ch;
	int i;
	for (i = 0; i < 6; i++) {

	scanf("%c",&ch);
	printf("%c",ch);
	}*/
	//엔터키까지 입력받고 출력하는 함수
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
	//while (1)//ctrl+z 를 입력하는 순간 -1값이 넘어오므로false가 되어 종료
	//{
	//	res = scanf("%c", &ch);
	//	if (res == -1) break;
	//	printf("%d", ch);
	//}
	//입력된 값 + \n(개행문자)
	//fflush()함수:입력된 버퍼의 값을 비워주는 함수
	
	//int a;
	//char ch;
	////scanf("%d", a);
	////printf("%d\n", a);
	//fflush(stdin);//stdin 표준입력할 공간의 버퍼이름
	//scanf("%c", &ch);
	//printf("%c", ch);

	int num, grade;

	printf("학번입력: ");
	scanf("%d", &num);
	getchar();//\n을 버퍼로 부터 읽어옴 -->버퍼를 비워주는 효과

	//fflush(stdin);--2015버전 이전에서만 동작
	printf("학점입력: ");
	grade = getchar();
	printf("학번:%d, 학점%C", num, grade);

	return 0;
}