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
//	cout << "생성자 실행 radius =" << radius << endl;
//}
//Circle::Circle(int radius)
//{
//	this->radius = radius;
//	cout << "생성자 실행 radius =" << radius << endl;
//}
//Circle::~Circle()
//{
//	cout << "소멸자 실행 radius =" << radius << endl;
//}
//void increase(Circle c) {	//call by value
//	int r = c.getRadius();	//Circle을 생성한다
//	c.setRadius(r + 1);		//초기값이 리셋되기 때문이다
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
//	return temp;				//객체 temp를 리턴한다
//}
//
//int main() {
//	Circle c;					//객체를 만들어준다,radius를 1로 초기화 해준다.
//	cout << c.getArea() << endl;
//	c = getCircle();			//객체에 temp가 복사되어 radius가30이 된다
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
//	cout << refc.getArea() << " " << circle.getArea();//두개의 getArea는 똑같다
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
//	if (average(x, 6, avg)) cout << "평균은" << avg << endl;
//	else cout << "매개변수 오류" << endl;
//	if (average(x, -2, avg)) cout << "평균은" << avg << endl;
//	else cout << "매개변수 오류" << endl;
//	//if (average(x, 7, avg)) cout << "평균은" << avg << endl;
//	//else cout << "매개변수 오류" << endl;
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
//	cout << "생성자실행 radius=" << radius << endl;
//}
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "생성자실행 radius=" << radius << endl;
//}
//Circle::~Circle()
//{
//	cout << "소멸자실행 radius=" << radius << endl;
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
//	cout << "반지름을 입력하시오->";
//	cin >> r;
//	if (r < 0)
//		cout << "오류" << endl;
//	c.setRadius(r);
//}
//int main()
//{
//	Circle donut;
//	Circle pizza;
//	readRadius(donut);
//	readRadius(pizza);
//	cout << "donut의 면적 = " << donut.getArea() << endl;
//	cout << "pizza의 면적 = " << pizza.getArea() << endl;
//}
