//포인터: 주소값을 저장하는 변수,메모리접근,시작주소만 사용,변수대신 주소값사용
//포인터를 쓰는 이유 : 함수에서 배열의 값을 참조,수정할 떄 필요ㅋ
//메모리 접근 단위 :byte
//ex)int 4byte 할당시 100번지부터 103번지까지 할당되면 시작주소 100번지 저장.
//메모리를 반납함

#include <stdio.h>

int main(void)
{
	int a;
	double b=3.5;
	char c;
	int* pa;
	double* pb;
	pa = &a;//pa:a의 주소값 +a에 저장된 데이터타입/
			//&a-->출력:번지(+데이터타입)
	pb = &b;
	a = 10;
	a += 20;
	printf("%d\n", a);		//==*&a
	printf("%d\n", *pa);	//간접참조연산자 ==*&a
	printf("int변수의 주소:%d\n", &a);
	printf("int변수의 주소:%u\n", &a);
	printf("int변수의 주소(%%d):%d\n", &a);
	printf("int변수의 주소(%%u):%u\n", &a);
	printf("int변수의 주소(%%p):%p\n", &a);//16진수 주소표현전용
	printf("b:%lf\n", b);
	printf("\&b:%lf\n", *&b);
	printf("\pb:%lf\n", *pb);
	printf("b의주소:%p\n", &b);


	/*printf("int형 변수의 주소: %u\n", &a);
	printf("double형 변수의 주소: %u\n", &b);
	printf("char형 변수의 주소: %u\n", &c);
	
	printf("int형 변수의 주소의 사이즈: %u\n", sizeof( & a));
	printf("double형 변수의 주소의 사이즈: %u\n", sizeof( & b));
	printf("char형 변수의 주소의 사이즈: %u\n",sizeof(&c));*/

	//int a;
	//int* pa;

	//pa = &a;
	//*pa = 10;//*pa 는 *&a 와 같고 a와같다.

	//printf("포인터로 a값 출력:%d\n", *pa);
	//printf("변수명으로 a값 출력:%d\n", a);
	
	


	return 0;
}