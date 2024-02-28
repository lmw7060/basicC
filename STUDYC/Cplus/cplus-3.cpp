#include <iostream>
using namespace std;

//class Circle	//클래스 선언부
//{
//public:
//	int radius;
//	double getArea();//객체속에 메모리할당되지않음
//};
//double Circle::getArea()	//함수 정의부
//{
//	return 3.14 * radius * radius;
//}
//int main()
//{
//	Circle donut;	//객체(인스턴스) -> 메모리할당 ->사이즈 4byte
//	donut.radius = 1;
//	double area = donut.getArea();
//	cout << "donut 면적은" << area << endl;
//	cout << "donut 객체의 사이즈:" << sizeof(donut) << endl;	//radius만 사이즈를 잰다
//
//	Circle pizza;
//	pizza.radius = 30;
//	area = pizza.getArea();
//	cout << "pizza 면적은" << area << endl;
//	cout << "pizza 객체의 사이즈:" << sizeof(pizza) << endl;	//radius만 사이즈를 잰다
//}

//class Rectangle {
//public:
//	int width;
//	int height;
//	int getArea();
//};
//
//int Rectangle::getArea()
//{
//	return width * height;
//}
//
//int main()
//{
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은" << rect.getArea() << endl;
//}

//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//
//Circle::Circle() {	//기본생성자 - 선언하지않으면 내부적으로 자동생성
//	radius = 1;
//	cout << "반지름" << radius << "원 생성" << endl;
//}
//
//Circle::Circle(int r) {	//생성자함수 중복
//	radius = r;
//	cout << "반지름" << radius << "원 생성" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	Circle donut;	//매개변수 없는 생성자
//	double area = donut.getArea();
//	cout << "donut 면적은" << area << endl;
//
//	Circle pizza(30);	//매개변수가 있는 생성자
//	area = pizza.getArea();
//	cout << "pizza 면적은 " << area << endl;
//}

//class Point {
//	int x, y;
//public:
//	Point();
//	Point(int a, int b);
//	void show() { cout << "(" << x << "," << y << ")" << endl; }
//};
//
//Point :: Point() :Point(0,0){}
//
//Point::Point(int a,int b)
//	:x(a),y(b){}
//
//int main()
//{
//	
//	Point origin;
//	Point target(10, 20);
//	origin.show();
//	target.show();
//}

//class Rectangle {
//
//public:
//	int width, height;
//	Rectangle();
//	Rectangle(int w,int h);
//	Rectangle(int length);
//	bool isSquare();
//};
//
//Rectangle::Rectangle()					//매개변수가 없는 함수
//{
//	width = height = 1;
//	cout << "기본생성자 호출.width:" << width << endl << "height:" << height << endl;
//}
//
//Rectangle::Rectangle(int w,int h)		//매개변수가 2개인 함수
//{
//	width = w; height = h;
//	cout << "매개변수2개 생성자 호출.width:" << width << endl << "height:" << height << endl;
//}
//
//Rectangle::Rectangle(int length)		//매개변수가 1개인 함수
//{
//	width = height = length;
//	cout << "매개변수1개 생성자 호출.width:" << width << endl << "height:" << height << endl;
//}
//
//bool Rectangle::isSquare() {			//정사각형이면 true로 나타내는 함수
//	if (width == height) return true;
//	else return false;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3,5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
//	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
//	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
//}

//class Circle {
//	int raduis;//반지름 변수
//public:
//	Circle();//생성자 선언,초기값 세팅
//	Circle(int r);//생성중복 이유? 여러가지 형태의 생성자를 만들기 위해서
//	~Circle();//소멸자 선언
//	double getArea();//일반함수선언
//};
//
//Circle::Circle() {
//	raduis = 1;
//	cout << "기본생성자 호출 raduis반지름:" << raduis << "원 생성" << endl;
//}
//
//Circle::Circle(int r) {
//	raduis = r;
//	cout << "매개 변수 생성자 호출 raduis 반지름:" << raduis << "원 생성" << endl;
//}
//
//Circle::~Circle() {
//	cout << "반지름" << raduis << "원 소멸" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * raduis * raduis;
//}
//
//int main() {
//	//객체 생성 -->생성자(초기값)
//	Circle donut;//객체(인스턴스) 생성과 동시에 기본생성자 호출
//	double area = donut.getArea();
//	cout << "donut면적:" << area << endl;
//	cout << "donut객체의 사이즈" << sizeof(donut) << endl;
//
//
//	Circle pizza(30);//객체(인스턴스) 생성과 동시에 매개변수가 있는 생성자 호출
//	//getArea()
//	area = pizza.getArea();
//	cout << "donut면적:" << area << endl;
//	cout << "donut객체의 사이즈" << sizeof(pizza) << endl;
//	//소멸자 호출 -->메모리 반환
//	return 0;
//
//}

//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "반지름:" << radius << "원 생성" << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "반지름:" << radius << "원 생성" << endl;
//}
//
//Circle::~Circle() {
//	cout << "소멸자호출" << endl;
//	cout << "반지름" << radius << "원 소멸" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//Circle globalDonut(1000);
//Circle globalPizza(2000);
//
//void f()
//{
//	Circle fDonut(100);
//	Circle fPizza(200);
//	cout << "fDonut의 면적" << fDonut.getArea() << endl;
//	cout <<"fPizza의 면적" << fPizza.getArea() << endl;
//}
//int main() {
//	Circle mainDonut;
//	Circle mainPizza(30);
//	f();
//
//	cout << "globalDonut면적:" << globalDonut.getArea() << endl;
//	cout << "globalPizza면적:" << globalPizza.getArea() << endl;
//	cout << "mainDonut면적:" << mainDonut.getArea() << endl;
//	cout << "mainPizza면적:" << mainPizza.getArea() << endl;
//};