#include <iostream>
#include <stdlib.h>
using namespace std;

//class Circle {
//public:
//	int radius;
//	Circle() { radius = 1; 
//	cout << "������1 ȣ��" << endl;
//	}
//	Circle(int r) { radius = r; 
//	cout << "������2 ȣ��" << radius << endl;
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
//	cout << "pizza ������:" << (*p).radius << endl;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//
//}

//class Circle {
//public:
//	int radius;
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }	//�Ű������� �ִ� �����ڸ� ����� ��� �⺻�����ڴ� �ݵ�� �����ؾ���
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius;  }
//};
//
//int main() 
//{
//	Circle circleArray[3];	//�⺻������ ȣ�� - �߰� �ʱ�ȭ �Ұ�
//
//	circleArray[0].setRadius(10);	//radius �ʱ�ȭ
//	circleArray[1].setRadius(20);	
//	circleArray[2].setRadius(30);	
//
//	for (int i = 0; i < 3; i++)
//		cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;
//
//	Circle* p;
//	p = circleArray;
//	for (int i = 0; i < 3; i++) {
//		/*cout << "Circle" << i << "�� ������" << p->getArea() << endl;
//		p++;*/
//		cout << "Circle" << i + 1 << "������ ������:" << p[i].radius << endl;
//		cout << "Circle" << i + 1 << "������ ����:" << p[i].getArea() << endl;
//		cout << "Circle" << i + 1 << "������ ����:" << (*(p+i)).getArea() << endl;
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
//		cout << i + 1 << "��° ��ü����" << endl << circleArray[i].getArea() << endl;
//		cout << "------------------------------------------"<<endl;
//	}
//	return 0;
//}


//class Circle {
//	public:
//		int radius;
//		Circle() { radius =	1; }	//�⺻������ ���
//		Circle(int r) { radius = r; }
//		double getArea() { return 3.14 * radius * radius;  }
//	};
//	
//int main() 
//{
//	//Circle waffle(15);		//�Ű������� �ִ� ������ ȣ��
//	//Circle circleArray[3]//�⺻������ ȣ��
//	Circle circleArray[3] = {Circle(10),Circle(20) ,Circle() };//�� ��� �ʱ�ȭ
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
//			cout << "Circle [ " << i << "," << j << "]�� ������";
//			cout << circles[i][j].getArea() << endl;
//		}
//	}
//}

//int main() {
//	cout << "�Է��� ������ ������?";
//	int n;
//	cin >> n;
//	if (n <= 0) return 0;	//0���� �������� �Էµɶ��� ��������
//	int* p = new int[n];	//���� �Ҵ� �ο�
//	if (!p) {				//�޸𸮸� �Ҵ��� ������ ������
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
//		return 0;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << i + 1 << "���� ����:";
//		cin >> p[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++) 
//		sum += p[i];
//	cout << "��� =" << sum / n << endl;
//	delete[] p;			//�޸� ��ȯ /[] p�� �ؾ� ���ι�ȯ�Ѵ� //p�� �Ⱦ���0������ ��ȯ�ǰ� �������� �����ִ�.
//}

//�����͹迭 ����
//�����͹迭 : ������(�ּ�)���� ���ִ� �迭
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};
////�Լ����Ǻ�
//Circle::Circle()
//{
//	radius = 1;
//	cout << "������ ȣ�� radius:" << radius << endl;
//}
////radius(r) <== radius=r
//Circle::Circle(int r):radius(r){ cout << "������ ȣ�� radius:" << radius << endl; }
////Circle::Circle(int r)
////{
////	radius = r;
////	cout << "������ ȣ�� radius:" << radius << endl;
////}
//
//Circle::~Circle()
//{
//	cout << "�Ҹ��� ȣ�� radius:" << radius << endl;
//}
//
//double Circle::getArea()
//{
//	return 3.14*radius*radius;
//}
//
//int main()
//{
//	const int numofCircles = 3;//const�� ������ ����
//	Circle* cArr[numofCircles];//�����͹迭���� - ��������� ������ ��ü���� �ּ�
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
//		cout << i + 1 << "��° �Ҹ��� ȣ��~!" << endl;
//		delete cArr[i];
//	}
//	return 0;
//}

