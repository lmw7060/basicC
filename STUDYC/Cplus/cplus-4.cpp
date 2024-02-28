#include <iostream>
#include <stdlib.h>
using namespace std;

//class Circle {
//public:
//	int radius;
//	Circle() { radius = 1; 
//	cout << "생성자1 호출" << endl;
//	}
//	Circle(int r) { radius = r; 
//	cout << "생성자2 호출" << radius << endl;
//	}
//	double getArea();
//	int getRadius(int aaa) {
//		radius = aaa;
//		return radius;
//	}
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//
//int main()
//{
//	Circle donut;
//	Circle pizza(30);
//	cout << donut.getArea() << endl;
//
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//
//	p = &pizza;
//	pizza.getRadius(10);
//	cout << "pizza 반지름:" << (*p).radius << endl;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//
//}

//class Circle {
//public:
//	int radius;
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }	//매개변수가 있는 생성자를 명시할 경우 기본생성자는 반드시 선언해야함
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius;  }
//};
//
//int main() 
//{
//	Circle circleArray[3];	//기본생성자 호출 - 추가 초기화 불가
//
//	circleArray[0].setRadius(10);	//radius 초기화
//	circleArray[1].setRadius(20);	
//	circleArray[2].setRadius(30);	
//
//	for (int i = 0; i < 3; i++)
//		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;
//
//	Circle* p;
//	p = circleArray;
//	for (int i = 0; i < 3; i++) {
//		/*cout << "Circle" << i << "의 면적은" << p->getArea() << endl;
//		p++;*/
//		cout << "Circle" << i + 1 << "번쨰의 반지름:" << p[i].radius << endl;
//		cout << "Circle" << i + 1 << "번쨰의 면적:" << p[i].getArea() << endl;
//		cout << "Circle" << i + 1 << "번쨰의 면적:" << (*(p+i)).getArea() << endl;
//		cout << "-----------------------------------------------" << endl;
//	}
//	return 0;
//}

//class Circle {
//public:
//	int radius;
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	Circle circleArray[3];
//	circleArray[0].radius = 1;
//	circleArray[1].radius = 2;
//	circleArray[2].radius = 10;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << i + 1 << "번째 객체생성" << endl << circleArray[i].getArea() << endl;
//		cout << "------------------------------------------"<<endl;
//	}
//	return 0;
//}


//class Circle {
//	public:
//		int radius;
//		Circle() { radius =	1; }	//기본생성자 명시
//		Circle(int r) { radius = r; }
//		double getArea() { return 3.14 * radius * radius;  }
//	};
//	
//int main() 
//{
//	//Circle waffle(15);		//매개변수가 있는 생성자 호출
//	//Circle circleArray[3]//기본생성자 호출
//	Circle circleArray[3] = {Circle(10),Circle(20) ,Circle() };//각 요소 초기화
//	//Circle(10),Circle(20) ,Circle()
//	for (int i = 0; i < 3; i++)
//		cout << circleArray[i].getArea() << endl;
//	return 0;
//}

//class Circle {
//		int radius;
//	public:
//		Circle() { radius = 1; }
//		Circle(int r) { radius = r; }
//		void setRadius(int r) { radius = r; }
//		double getArea() { return 3.14 * radius * radius;  }
//	};
//
//int main() {
//	Circle circles[2][3];
//	Circle circle[2][3] = {Circle(1),Circle(2) ,Circle(3) ,Circle(4) ,Circle(5) ,Circle(6) }
//	int k = 1;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			circles[i][j].setRadius(k);
//			k++;
//		}
//	}
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			cout << "Circle [ " << i << "," << j << "]의 면적은";
//			cout << circles[i][j].getArea() << endl;
//		}
//	}
//}

//int main() {
//	cout << "입력할 정수의 개수는?";
//	int n;
//	cin >> n;
//	if (n <= 0) return 0;	//0보다 작은수가 입력될때면 실행종료
//	int* p = new int[n];	//동적 할당 부여
//	if (!p) {				//메모리를 할당할 공간이 없을때
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "번쨰 정수:";
//		cin >> p[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++) 
//		sum += p[i];
//	cout << "평균 =" << sum / n << endl;
//	delete[] p;			//메모리 반환 /[] p로 해야 전부반환한다 //p를 안쓰면0번지만 반환되고 나머지는 남아있다.
//}

//포인터배열 응용
//포인터배열 : 포인터(주소)들이 모여있는 배열
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};
////함수정의부
//Circle::Circle()
//{
//	radius = 1;
//	cout << "생성자 호출 radius:" << radius << endl;
//}
////radius(r) <== radius=r
//Circle::Circle(int r):radius(r){ cout << "생성자 호출 radius:" << radius << endl; }
////Circle::Circle(int r)
////{
////	radius = r;
////	cout << "생성자 호출 radius:" << radius << endl;
////}
//
//Circle::~Circle()
//{
//	cout << "소멸자 호출 radius:" << radius << endl;
//}
//
//double Circle::getArea()
//{
//	return 3.14*radius*radius;
//}
//
//int main()
//{
//	const int numofCircles = 3;//const로 선언한 이유
//	Circle* cArr[numofCircles];//포인터배열선언 - 산발적으로 생성된 객체들의 주소
//	for (int i = 0; i < numofCircles; i++)
//	{
//		cArr[i] = new Circle(i + 1);//new Circle;
//	}
//	for (int i = 0; i < numofCircles; i++)
//	{
//		cout << cArr[i]->getArea() << endl;
//	}
//	for (int i = 0; i < numofCircles; i++)
//	{
//		cout << i + 1 << "번째 소멸자 호출~!" << endl;
//		delete cArr[i];
//	}
//	return 0;
//}

