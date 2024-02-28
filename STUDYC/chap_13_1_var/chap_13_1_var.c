//지역변수(local) - 함수블럭안에 선언,(auto)int a; -->초기화,블럭속에 블럭변수
//전역변수(global) - 함수 밖에서 선언,초기화 --> 0(자동)
//정적 지역변수(static) - 데이터영역,지역변수와 같으나 생존기간 다름,자동초기화,변수생존기간이 전체 프로그램 종료시까지
//						지역변수의 일반적인 특징과 같지만 함수실행 종료와는 무관
//레지스터변수(register) - cpu안에서 사용되는 메모리,레지스터 안의 변수,주소연산자 불가능
//함수 속 변수의 메모리 공간 ->호출시 생성 ->main()돌아올때 반환
//지역변수 선언시 초기화 -> 그렇지않으면 쓰레기 값 들어감
//지역변수 장단점 - 메모리관리가 효율적,디버깅(오류수정) 유리 -즉,main()속의 변수는 함수를 볼 필요없음
//					main()속에 선언된 변수는 외부에서 직접접근불가->매개변수(포인터변수 등)를 통해서 접근가능
//전역변수 장단점 - 부르기쉽다(값 공유가 쉽다)
//					디버깅이 어렵다,메모리관리가 비효율적->데이터영역,결과값이 문제일때 사용한 곳을 전체점검
//					실수로 전역변수와 같은 이름을 지역변수로 선언한 경우 지역변수 사용 불가-->가능한 사용자제
#include <stdio.h>

//void assign(void);
//int main(void)
//{
//	auto int a = 0;
//	assign();
//	printf("main함수a=%d\n", a);
//	return 0;
//}
//void assign(void)
//{
//	int a;
//	a = 10;
//	printf("assign함수 a:%d\n", a);
//}

//int main(void)
//{
//	int a = 10, b = 20;
//	printf("교환 전 a와b의 값:%d,%d\n", a, b);
//	{
//		int temp;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	printf("교환 후 a와b의 값: %d,%d\n", a, b);
//	//printf("%d",temp); --> 오류 : 코드블럭에서 해제된 공간
//	return 0;
//}

//void assign10(void);
//void assign20(void);
//int a;
//int main(void)
//{
//	printf("함수 호출 전a값:%d\n", a);
//	assign10();
//	assign20();
//	printf("함수 호출 후a값:%d\n", a);
//	return 0;
//}
//void assign10(void)
//{	
//	a = 10;
//}
//void assign20(void)
//{
//	int a;
//	a = 20;
//}

//void auto_func(void);
//void static_func(void);
//int main(void)
//{
//	int i;
//	printf("일반지역변수(auto)를 사용한 함수 ...\n");
//	for (i = 0; i < 3; i++) 
//	{
//		auto_func();
//	}
//}
//
//void auto_func(void)
//{
//	auto int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func(void)
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}

//int main(void)
//{
//	register int i;
//	auto int sum = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	//printf("%p", &i);//레지스터변수할당
//	return 0;
//}