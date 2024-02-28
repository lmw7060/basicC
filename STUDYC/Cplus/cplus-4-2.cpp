#include <iostream>
using namespace std;

//int main() 
//{	
//	cout << "입력할 정수의 개수는?";
//	int n;
//	cin >> n;
//	if (n <= 0) return 0;	//0보다 작은수가 입력될때면 실행종료
//	int* p = new int[n];	//동적 할당 부여
//	if (!p) {				//메모리를 할당할 공간이 없을때
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << "번재 정수:";
//		cin >> p[i];
//	}
//
//	int sum = 0;
//	double avg = 0;
//	for (int i = 0; i < n; i++)
//		sum += p[i];
//	avg = (double)sum/n;
//	cout << "평균=" << avg << endl;
//
//	delete[]p;
//	int* ip = new int(20);
//	char* cp = new char('a');
//	cout << "ip의 내용:" << *ip << endl << "cp의 내용" << *cp << endl;
//	delete cp;
//	delete ip;
//}

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; cout << "생성자실행 radius = " << radius << endl; }
//	Circle(int r) { radius = r; cout << "생성자실행 radius = " << radius << endl;}
//	~Circle() { cout << "소멸자실행 radius = " << radius << endl; }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius;  }
//};
//
//int main() 
//{
//	Circle* p, * q;
//	//Circle donut; //donut <-- 오류
//	p = new Circle;//new Circle() <-- 가능
//	q = new Circle(30);
//	cout << p->getArea()<<"-> p원의 면적" << endl<< q->getArea()<<"-> q원의 면적" << endl;
//	delete p;
//	delete q;
//	return 0;
//}

//프로그램 개요: 사용자로 부터 반지름을 입력받고 해당 Circle객체를 동적생성한다
//면적 출력.사용자입력이 음수이면 종료
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; cout << "생성자실행 radius = " << radius << endl; }
//	Circle(int r) { radius = r; cout << "생성자실행 radius = " << radius << endl; }
//	~Circle() { cout << "소멸자실행 radius = " << radius << endl; }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius;}
//};
//
//int main()
//{
//	int radius;//사용자로부터 반지름을 입력받을 변수
//	while (true) 
//	{
//	cout << "반지름을 입력하시오" << endl;
//	cin >> radius;
//		if (radius <= 0) break;	//조건에 맞지않으면 while문을 빠져나감
//		Circle* p = new Circle(radius);//radius사이즈의 객체생성 ->주소저장
//		cout << "원의 면적은" << p->getArea() << endl;
//		delete p;
//	}
//	//delete p; 만약 여기에서 메모리 헤제시 그동안 생성한 객체들의 메모리 누수발생
//	return 0;
//}

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; cout << "생성자실행 radius = " << radius << endl; }
//	Circle(int r) { radius = r; cout << "생성자실행 radius = " << radius << endl; }
//	~Circle() { cout << "소멸자실행 radius = " << radius << endl; }
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main()
//{	
//	/*int a = 3;
//	int[a] = { 0 };*///불가능 - 가변길이 배열을 사용하는 것은 C++에서 허용되지않음 C++에서는 배열의 크기를 컴파일타임에 
//					//상수로 결정해야 하므로 배열의 크기로 상수나 상수표현식을 사용해야함
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
//	//pArray를 참조하고 있던 포인터가 메모리를 해제되면 p는 pArray를 참조하고 있기때문에 유효하지않은 메모리공간을 참조하고
//	//있는 상황이된다.
//	//p는 댕글링포인터가 된다.(dangling pointer)
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
//	cout << "생성하고자 하는 원의 개수?";
//	int n, radius;
//	cin >> n;
//	if (n <= 0) return 0;
//	Circle* pArray = new Circle[n];
//	for (int i = 0; i < n; i++) {
//		cout << "원" << i + 1 << ":";
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
//	cout << endl << "면적이 100에서 200사이인 원의 개수는 " << count << endl;
//	delete[] pArray;
//}

