//문자열
//문자열 상수:"apple" -->(컴파일)apple이 저장된 시작주소값으로 변함 .100번지

//문자열-(컴파일)문자열 시작주소 값-->포인터상수
//scanf()-공백을 포함한 문자열 입력시 공백 전까지만 출력,버퍼오버플로우
// %c일 경우 - 화이트스페이스입력됨 -->무시하기 위해 %c앞에 공백문자를 넣어준다 또는 \n,\t
//getchar(),putchar()-문자전용 입출력함수 int로 선언(ctrl+z떄문)화이트 스페이스 입력됨
//gets()-공백을 포함한 문자열 출력.(\n없음), 버퍼오버플로우 발생 가능성
//puts()-문자열 출력
//fgets()-버퍼오버플로우발생x,fgets(복사될위치,sizeof(배열),stdin),(배열의 사이즈-1)까지
//입력후 +\n
//표준입력함수:scanf(),getchar(),gets(),fgets() --> 같은버퍼를 공유

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//printf("apple 출력:%s\n", "apple");	//문자열상수 -->포인터상수
	//printf("apple 출력:%s\n", "apple"+1);	//포인터연산식 가능
	//printf("apple 출력:%s\n", "apple"+2);

	
	//printf("apple의 시작주소값:%p\n", "apple");
	//printf("apple의 시작주소값:%p\n", "apple"+1);
	//printf("첫번째 문자:%c\n", *"apple");
	//printf("두번째 문자:%c\n", *("apple" + 1));
	//printf("3번째 문자:%c\n", *("apple" + 2));
	//printf("4번째 문자:%c\n", *("apple" + 3));
	//printf("5번째 문자:%c\n", *("apple" + 4));
	//printf("6번째 문자:%c\n", *("apple" + 5));

	//printf("배열로 표현한 세번째 문자: %c\n", "apple"[2]);//문자열상수는 char배열처럼 사용가능

	//char* dessert = "apple";

	///*printf("오늘 후식은 %s입니다.\n", dessert);
	//dessert = "banana";
	//printf("내일 후식은 %s입니다.\n", dessert);*/
	//while (*dessert != '\0')
	//{
	//	printf("%s\n", dessert);
	//	//putchar(*dessert);
	//	dessert++;
	//}

	//char str[80];
	//printf("문자열입력:");
	//scanf("%s", str);
	//printf("첫 번째 단어:%s\n", str);
	//scanf("%s", str); //입력받지 않았지만 앞에서 입력된 나머지 문자열 출력됨
	////즉 , scanf()가 동작을 하면 가장 먼저 버퍼를 확인함 -->데이터가 없으면
	////-->운영체제에 권한을 이양 -->키보드입력 -->버퍼에 저장
	//printf("버퍼에 남아 있는 두 번째 단어:%s\n", str);

	//gets() --- 문자열을 입력받는 함수,스페이스도 입력가능,버퍼오버플로우
	//char str[20];	
	////scanf("%s", str);
	//gets(str);//apple입력하면 마지막에 '\n'이 추가된다.
	//printf("%s\n", str);
	//printf("%d\n", str[5]);
	//버퍼오버플로우 해결법 --> fgets():\n까지 입력됨
	//ex)apple jam\n\0

	char str[20];
	fgets(str,sizeof(str),stdin);//apple\n --> 6자
	//printf("%s", str);//입력시 맨끝에\n\0
	//str[strlen(str) - 1] = '\0';
	//puts(str);
	printf("%d", strlen(str));//널 전까지의 길이
	//sizeof(str)은 배열전체의 길이 반환,strlen(str)입력된 문자열의 길이(null제외)

	return 0;
}