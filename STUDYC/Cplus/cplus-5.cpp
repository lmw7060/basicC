#include <iostream>
using namespace std;

//class Circle {
//private:
//	int radius;
//public :
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle()
//{
//	radius = 1;
//	cout << "������ ���� radius =" << radius << endl;
//}
//Circle::Circle(int radius)
//{
//	this->radius = radius;
//	cout << "������ ���� radius =" << radius << endl;
//}
//Circle::~Circle()
//{
//	cout << "�Ҹ��� ���� radius =" << radius << endl;
//}
//void increase(Circle c) {	//call by value
//	int r = c.getRadius();	//Circle�� �����Ѵ�
//	c.setRadius(r + 1);		//�ʱⰪ�� ���µǱ� �����̴�
//}
//
//int main() {
//	Circle waffle(30);	//call by value
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}

//class Circle {
//private:
//	int radius;
//public :
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//
//Circle::Circle()
//{
//	radius = 1;
//}
//
//Circle::Circle(int radius)
//{
//	this->radius = radius;
//}
//
//Circle::~Circle()
//{
//}
//
//Circle getCircle()		
//{
//	Circle temp(30);
//	return temp;				//��ü temp�� �����Ѵ�
//}
//
//int main() {
//	Circle c;					//��ü�� ������ش�,radius�� 1�� �ʱ�ȭ ���ش�.
//	cout << c.getArea() << endl;
//	c = getCircle();			//��ü�� temp�� ����Ǿ� radius��30�� �ȴ�
//	cout << c.getArea() << endl;
//}

//int main() 
//{
//	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n;
//	n = 4;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//	refn = i;
//	refn++;
//	cout << i << '\t' << n << '\t' << refn << endl;
//	int* p = &refn;
//	*p = 20;
//	cout << i << '\t' << n << '\t' << refn << endl;
//}

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() 
//{
//	Circle circle;
//	Circle& refc = circle;
//	refc.setRadius(10);
//	cout << refc.getArea() << " " << circle.getArea();//�ΰ��� getArea�� �Ȱ���
//}

//void swap(int& a, int& b) {
//	int tmp;
//
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main() {
//	int m = 2, n = 9;
//	swap(m, n);
//	cout << m << ' ' << n;
//}

//bool average(int a[], int size, double& avg) {
//	if (size <= 0 )
//		return false;
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += a[i];
//	avg = sum / size;
//	return true;
//}
//int main() {
//	int x[] = { 0,1,2,3,4,5 };
//	double avg;
//	if (average(x, 6, avg)) cout << "�����" << avg << endl;
//	else cout << "�Ű����� ����" << endl;
//	if (average(x, -2, avg)) cout << "�����" << avg << endl;
//	else cout << "�Ű����� ����" << endl;
//	//if (average(x, 7, avg)) cout << "�����" << avg << endl;
//	//else cout << "�Ű����� ����" << endl;
//}

//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle()
//{
//	radius = 1;
//	cout << "�����ڽ��� radius=" << radius << endl;
//}
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "�����ڽ��� radius=" << radius << endl;
//}
//Circle::~Circle()
//{
//	cout << "�Ҹ��ڽ��� radius=" << radius << endl;
//}
//void increase(Circle& c) 
//{
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//int main ()
//{
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius=radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//void readRadius(Circle& c)
//{
//	int r;
//	cout << "�������� �Է��Ͻÿ�->";
//	cin >> r;
//	if (r < 0)
//		cout << "����" << endl;
//	c.setRadius(r);
//}
//int main()
//{
//	Circle donut;
//	Circle pizza;
//	readRadius(donut);
//	readRadius(pizza);
//	cout << "donut�� ���� = " << donut.getArea() << endl;
//	cout << "pizza�� ���� = " << pizza.getArea() << endl;
//}
