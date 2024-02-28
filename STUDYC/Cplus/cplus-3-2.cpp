#include <iostream>
using namespace std;

//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};
//
//Circle::Circle()
//{	
//	itoa()
//	radius = 1;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//}
//
//Circle::~Circle()
//{
//
//}
//
//double Circle::getArea()
//{
//	return 3.14*radius*radius;
//}
//
//int main()
//{
//	Circle apple(3);
//	Circle Orange();
//}

//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};//클래스 정의부
//
//Circle::Circle()
//{
//	radius = 1;
//	cout << "생성자1 호출.반지름:" << radius << endl;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "생성자2 호출.반지름:" << radius << endl;
//}
//
//Circle::~Circle()
//{
//	cout << "반지름" << radius << "의 소멸자 호출" << endl;
//}
//
//double Circle::getArea()
//{
//	return 3.14*radius*radius;
//}
//
//int main() {
//	Circle donut;
//	donut.radius = 2;
//	double area = 0;
//	area = donut.getArea();
//	cout << "donut의 반지름:" << donut.radius << endl;
//	cout << "donut의 면적:" << area << endl;
//
//	Circle pizza(5);
//	pizza.radius = 3;
//	area = pizza.getArea();
//	cout << "pizza의 반지름:" << pizza.radius << endl;
//	cout << "pizza의 면적:" << area << endl;
//
//	Circle ring;
//	ring.radius = 4;
//	area = ring.getArea();
//	cout << "ring의 반지름:" << ring.radius << endl;
//	cout << "ring의 면적:" << area << endl;
//}

//class Circle {
//private:
//	int radius;
//public:
//	~Circle() { cout << "radius" << radius << "인 소멸자 호출" << endl; }
//	int setRadius(int r) {
//		radius = r;
//		cout << "반지름" << radius << "가 세팅되었습니다." << endl;
//		return radius;
//	}
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//
//int main() 
//{
//	//Circle donut;//컴파일러가 기본생성자 Circle()호출
//	//int r = donut.setRadius(2);
//	//cout << "도넛의 반지름:" << r << endl;
//	//double area=0;
//	//area = donut.getArea();
//	//cout << "도넛의 면적:" << area << endl;
//
//	int rr = 0;
//	cout << "반지름을 입력하시오" << endl;
//	cin >> rr;
//	cout << "반지름:" << rr << endl;
//	Circle donut;
//	int dr=donut.setRadius(rr);
//	double area=donut.getArea();
//	cout << area << endl;
//
//
//	return 0;
//}
