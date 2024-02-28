//포인터를 사용하는이유
//함수는 리턴 값이 오직 한개이므로 두변수의 값을 바꾸는 함수는 포인터로만 가능
//(a,b라는 변수 모두를 리턴할 수 없으므로)-->메모리에 직접 접근
//배열:별도의 함수에서 배열의 내용을 수정하거나 참조할떄
//구조체:구조체 변수의 주소값을 넘겨주어 멤버변수에 접근.메모리 낭비 방지
//메모리 동적할당 - 변수와 달리 이름없음.메모리 할당후 리턴값 -->
//할당된 시작주소값 리턴 -->포인터변수에 받기

#include <stdio.h>

void swap(int* pa,int *pb);	//함수원형선언

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d,b:%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
