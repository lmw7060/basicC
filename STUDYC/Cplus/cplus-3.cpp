#include <iostream>
using namespace std;

//class Circle	//Ŭ���� �����
//{
//public:
//	int radius;
//	double getArea();//��ü�ӿ� �޸��Ҵ��������
//};
//double Circle::getArea()	//�Լ� ���Ǻ�
//{
//	return 3.14 * radius * radius;
//}
//int main()
//{
//	Circle donut;	//��ü(�ν��Ͻ�) -> �޸��Ҵ� ->������ 4byte
//	donut.radius = 1;
//	double area = donut.getArea();
//	cout << "donut ������" << area << endl;
//	cout << "donut ��ü�� ������:" << sizeof(donut) << endl;	//radius�� ����� ���
//
//	Circle pizza;
//	pizza.radius = 30;
//	area = pizza.getArea();
//	cout << "pizza ������" << area << endl;
//	cout << "pizza ��ü�� ������:" << sizeof(pizza) << endl;	//radius�� ����� ���
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
//	cout << "�簢���� ������" << rect.getArea() << endl;
//}

//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//
//Circle::Circle() {	//�⺻������ - �������������� ���������� �ڵ�����
//	radius = 1;
//	cout << "������" << radius << "�� ����" << endl;
//}
//
//Circle::Circle(int r) {	//�������Լ� �ߺ�
//	radius = r;
//	cout << "������" << radius << "�� ����" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	Circle donut;	//�Ű����� ���� ������
//	double area = donut.getArea();
//	cout << "donut ������" << area << endl;
//
//	Circle pizza(30);	//�Ű������� �ִ� ������
//	area = pizza.getArea();
//	cout << "pizza ������ " << area << endl;
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
//Rectangle::Rectangle()					//�Ű������� ���� �Լ�
//{
//	width = height = 1;
//	cout << "�⺻������ ȣ��.width:" << width << endl << "height:" << height << endl;
//}
//
//Rectangle::Rectangle(int w,int h)		//�Ű������� 2���� �Լ�
//{
//	width = w; height = h;
//	cout << "�Ű�����2�� ������ ȣ��.width:" << width << endl << "height:" << height << endl;
//}
//
//Rectangle::Rectangle(int length)		//�Ű������� 1���� �Լ�
//{
//	width = height = length;
//	cout << "�Ű�����1�� ������ ȣ��.width:" << width << endl << "height:" << height << endl;
//}
//
//bool Rectangle::isSquare() {			//���簢���̸� true�� ��Ÿ���� �Լ�
//	if (width == height) return true;
//	else return false;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3,5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
//	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
//	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
//}

//class Circle {
//	int raduis;//������ ����
//public:
//	Circle();//������ ����,�ʱⰪ ����
//	Circle(int r);//�����ߺ� ����? �������� ������ �����ڸ� ����� ���ؼ�
//	~Circle();//�Ҹ��� ����
//	double getArea();//�Ϲ��Լ�����
//};
//
//Circle::Circle() {
//	raduis = 1;
//	cout << "�⺻������ ȣ�� raduis������:" << raduis << "�� ����" << endl;
//}
//
//Circle::Circle(int r) {
//	raduis = r;
//	cout << "�Ű� ���� ������ ȣ�� raduis ������:" << raduis << "�� ����" << endl;
//}
//
//Circle::~Circle() {
//	cout << "������" << raduis << "�� �Ҹ�" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * raduis * raduis;
//}
//
//int main() {
//	//��ü ���� -->������(�ʱⰪ)
//	Circle donut;//��ü(�ν��Ͻ�) ������ ���ÿ� �⺻������ ȣ��
//	double area = donut.getArea();
//	cout << "donut����:" << area << endl;
//	cout << "donut��ü�� ������" << sizeof(donut) << endl;
//
//
//	Circle pizza(30);//��ü(�ν��Ͻ�) ������ ���ÿ� �Ű������� �ִ� ������ ȣ��
//	//getArea()
//	area = pizza.getArea();
//	cout << "donut����:" << area << endl;
//	cout << "donut��ü�� ������" << sizeof(pizza) << endl;
//	//�Ҹ��� ȣ�� -->�޸� ��ȯ
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
//	cout << "������:" << radius << "�� ����" << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "������:" << radius << "�� ����" << endl;
//}
//
//Circle::~Circle() {
//	cout << "�Ҹ���ȣ��" << endl;
//	cout << "������" << radius << "�� �Ҹ�" << endl;
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
//	cout << "fDonut�� ����" << fDonut.getArea() << endl;
//	cout <<"fPizza�� ����" << fPizza.getArea() << endl;
//}
//int main() {
//	Circle mainDonut;
//	Circle mainPizza(30);
//	f();
//
//	cout << "globalDonut����:" << globalDonut.getArea() << endl;
//	cout << "globalPizza����:" << globalPizza.getArea() << endl;
//	cout << "mainDonut����:" << mainDonut.getArea() << endl;
//	cout << "mainPizza����:" << mainPizza.getArea() << endl;
//};