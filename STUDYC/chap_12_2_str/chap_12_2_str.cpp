//strcpy()-문자열 복사/대입,문자열 초기화 후 값을 저장할 떄
//strncpy()-원하는 개수의 문자만 복사
//strcat()-문자열 붙이기
//strlen()-문자열의 길이 재기
//strcmp()-사전순서 비교
//배열에 넣어서 처리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[20] = "strawberry";//한번만 이렇게 초기화 가능
	//printf("%s", str1);
	///*str1[0] = 'a';
	//str1[1] = 'p';
	//str1[2] = 'p';
	//str1[3] = 'l';
	//str1[4] = 'e';
	//str1[5] = '\0';*/
	//strcpy(str1, "apple");//"apple"은 문자열이 복사x -->시작주소값
	//printf("%s\n", str1);

	//char str1[20] = "strawberry";
	//char str2[20] = "apple";
	//const char *ps1 = "banana";	//banana의 시작주소값이 포인터에 저장
	//char* ps2 = str2;
	///*str1[0] = 'a';
	//str1[1] = 'p';
	//str1[2] = 'p';
	//str1[3] = 'l';
	//str1[4] = 'e';*///str1[5]='\0'을 넣지않으면 appleberry로 출력
	//strcpy(str1, ps2);
	//printf("%s\n", str1);

	//strncpy()-------------------------------------------------------------------------------------------
	//strcpy():'\0'(null)없음
	//char str[20] = "mangotree";
	////strcpy(str, "apple");//apple\0
	//strncpy(str, "apple-pie", 5);//apple-pie중 5글자만 복사됨
	//printf("%s\n", str);

	//strcat()문자열붙이기--------------------------------------------------------------------------------
	/*char str[20] = "apple";
	strcat(str, "pie");
	printf("%s\n", str);
	strncat(str, "piece", 3);;
	printf("%s\n", str);*/

	//strlen()문자열의 길이 == 배열의 길이----------------------------------------------------------------
	//char str[20];
	//int len;
	//scanf("%s", str);//apple
	//printf("%d\n", sizeof(str));
	//printf("%d\n", strlen(str));

	//strcmp()사전순서 비교--------------------------------------------------------------------------------
	char str1[20] = "pear";
	char str2[20] = "peach";
	int res;
	strcmp(str1, str2);
	res = strncmp(str1, str2, 3);
	printf("res값:%d", res);
	
	return 0;
}