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
//};//Ŭ���� ���Ǻ�
//
//Circle::Circle()
//{
//	radius = 1;
//	cout << "������1 ȣ��.������:" << radius << endl;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "������2 ȣ��.������:" << radius << endl;
//}
//
//Circle::~Circle()
//{
//	cout << "������" << radius << "�� �Ҹ��� ȣ��" << endl;
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
//	cout << "donut�� ������:" << donut.radius << endl;
//	cout << "donut�� ����:" << area << endl;
//
//	Circle pizza(5);
//	pizza.radius = 3;
//	area = pizza.getArea();
//	cout << "pizza�� ������:" << pizza.radius << endl;
//	cout << "pizza�� ����:" << area << endl;
//
//	Circle ring;
//	ring.radius = 4;
//	area = ring.getArea();
//	cout << "ring�� ������:" << ring.radius << endl;
//	cout << "ring�� ����:" << area << endl;
//}

//class Circle {
//private:
//	int radius;
//public:
//	~Circle() { cout << "radius" << radius << "�� �Ҹ��� ȣ��" << endl; }
//	int setRadius(int r) {
//		radius = r;
//		cout << "������" << radius << "�� ���õǾ����ϴ�." << endl;
//		return radius;
//	}
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//
//int main() 
//{
//	//Circle donut;//�����Ϸ��� �⺻������ Circle()ȣ��
//	//int r = donut.setRadius(2);
//	//cout << "������ ������:" << r << endl;
//	//double area=0;
//	//area = donut.getArea();
//	//cout << "������ ����:" << area << endl;
//
//	int rr = 0;
//	cout << "�������� �Է��Ͻÿ�" << endl;
//	cin >> rr;
//	cout << "������:" << rr << endl;
//	Circle donut;
//	int dr=donut.setRadius(rr);
//	double area=donut.getArea();
//	cout << area << endl;
//
//
//	return 0;
//}
