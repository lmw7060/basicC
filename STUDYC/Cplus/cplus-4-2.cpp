#include <iostream>
using namespace std;

//int main() 
//{	
//	cout << "�Է��� ������ ������?";
//	int n;
//	cin >> n;
//	if (n <= 0) return 0;	//0���� �������� �Էµɶ��� ��������
//	int* p = new int[n];	//���� �Ҵ� �ο�
//	if (!p) {				//�޸𸮸� �Ҵ��� ������ ������
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << "���� ����:";
//		cin >> p[i];
//	}
//
//	int sum = 0;
//	double avg = 0;
//	for (int i = 0; i < n; i++)
//		sum += p[i];
//	avg = (double)sum/n;
//	cout << "���=" << avg << endl;
//
//	delete[]p;
//	int* ip = new int(20);
//	char* cp = new char('a');
//	cout << "ip�� ����:" << *ip << endl << "cp�� ����" << *cp << endl;
//	delete cp;
//	delete ip;
//}

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; cout << "�����ڽ��� radius = " << radius << endl; }
//	Circle(int r) { radius = r; cout << "�����ڽ��� radius = " << radius << endl;}
//	~Circle() { cout << "�Ҹ��ڽ��� radius = " << radius << endl; }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius;  }
//};
//
//int main() 
//{
//	Circle* p, * q;
//	//Circle donut; //donut <-- ����
//	p = new Circle;//new Circle() <-- ����
//	q = new Circle(30);
//	cout << p->getArea()<<"-> p���� ����" << endl<< q->getArea()<<"-> q���� ����" << endl;
//	delete p;
//	delete q;
//	return 0;
//}

//���α׷� ����: ����ڷ� ���� �������� �Է¹ް� �ش� Circle��ü�� ���������Ѵ�
//���� ���.������Է��� �����̸� ����
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; cout << "�����ڽ��� radius = " << radius << endl; }
//	Circle(int r) { radius = r; cout << "�����ڽ��� radius = " << radius << endl; }
//	~Circle() { cout << "�Ҹ��ڽ��� radius = " << radius << endl; }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius;}
//};
//
//int main()
//{
//	int radius;//����ڷκ��� �������� �Է¹��� ����
//	while (true) 
//	{
//	cout << "�������� �Է��Ͻÿ�" << endl;
//	cin >> radius;
//		if (radius <= 0) break;	//���ǿ� ���������� while���� ��������
//		Circle* p = new Circle(radius);//radius�������� ��ü���� ->�ּ�����
//		cout << "���� ������" << p->getArea() << endl;
//		delete p;
//	}
//	//delete p; ���� ���⿡�� �޸� ������ �׵��� ������ ��ü���� �޸� �����߻�
//	return 0;
//}

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; cout << "�����ڽ��� radius = " << radius << endl; }
//	Circle(int r) { radius = r; cout << "�����ڽ��� radius = " << radius << endl; }
//	~Circle() { cout << "�Ҹ��ڽ��� radius = " << radius << endl; }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main()
//{	
//	/*int a = 3;
//	int[a] = { 0 };*///�Ұ��� - �������� �迭�� ����ϴ� ���� C++���� ���������� C++������ �迭�� ũ�⸦ ������Ÿ�ӿ� 
//					//����� �����ؾ� �ϹǷ� �迭�� ũ��� ����� ���ǥ������ ����ؾ���
//	Circle* pArray = new Circle[3];
//	pArray[0].setRadius(10);
//	pArray[1].setRadius(20);
//	pArray[2].setRadius(30);
//	for (int i = 0; i < 3; i++) {
//		cout << pArray[i].getArea() << endl;
//	}
//	Circle* p = pArray;
//	for (int i = 0; i < 3; i++) {
//		cout << p->getArea() << endl;
//		p++;
//	}
//	delete[] pArray;
//	//pArray�� �����ϰ� �ִ� �����Ͱ� �޸𸮸� �����Ǹ� p�� pArray�� �����ϰ� �ֱ⶧���� ��ȿ�������� �޸𸮰����� �����ϰ�
//	//�ִ� ��Ȳ�̵ȴ�.
//	//p�� ��۸������Ͱ� �ȴ�.(dangling pointer)
//}

//class Circle {
//	int radius;
//public:
//	Circle();
//	~Circle() { }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//Circle::Circle()
//{
//	radius = 1;
//}
//
//int main()
//{
//	cout << "�����ϰ��� �ϴ� ���� ����?";
//	int n, radius;
//	cin >> n;
//	if (n <= 0) return 0;
//	Circle* pArray = new Circle[n];
//	for (int i = 0; i < n; i++) {
//		cout << "��" << i + 1 << ":";
//		cin >> radius;
//		pArray[i].setRadius(radius);
//	}
//	int count = 0;
//	Circle* p = pArray;
//	for (int i = 0; i < n; i++) {
//		cout << p->getArea() << ' ';
//		if (p->getArea() >= 100 && p->getArea() <= 200)
//			count++;
//		p++;
//	}
//	cout << endl << "������ 100���� 200������ ���� ������ " << count << endl;
//	delete[] pArray;
//}

