//2차원배열을 쓰는 이유 - 데이터를 사용하는 사람이 해당자료를 접근/구분하기 위해
//실질적으로 1차원 배열과 같이 메모리가 할당됨
//sizeof(s) ==48byte	sizeof(s[0])==16byte*3=48byte
//sizeof(s[0]) == 16byte 한 행의 사이즈
//sizeof(s[0])/sizeof(s[0][0]) == 열의 개수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main(void)
//{
//	int i, j;
//	int s[3][4];//int[4]형,배열요소3개,배열요소명s[0],s[1],s[2]
//	//배열요소명 == 부분배열명 == 부분배열의 시작주소
//	for (i = 0; i < 3; i++)
//	{
//	
//		for (j = 0; j < 4; j++)
//		{
//		scanf("%5d", &s[i][j]);//대괄호연산자는 값을 나타내므로 주소연산자가 필요하다
//		}
//	}
//		return 0;
//}

//int main(void)
//{
//	int score[3][4];//int score[3][4]={0}; <-- 초기화
//	int total;
//	double avg;
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{	
//		printf("4과목의 점수입력:");
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
//		printf("총점:%d,평균:%.2lf\n", total, avg);
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
//	//char animal[0] = "rat";//각 부분배열의 시작주소의 값.주소상수에 주소상수를 대입할수없다. Rvalue와 Rvalue.
//	strcpy(animal[2], "rat");//cat을 rat으로
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
//	printf("%d반 점수...\n", i + 1);
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
				printf("성적을치시오.");
				scanf("%d",&arr[i][j][k]);//주소값 넣기!
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