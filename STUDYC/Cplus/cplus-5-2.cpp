#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//class Rectangle {
//	int width, height;
//public:
//	Rectangle() { width = 1, height = 1; cout << "기본생성자 호출:width= " << width<<"height= "<< height << endl; }
//	Rectangle(int width, int height) { this->width = width; this->height = height;
//	cout<<"생성자2 호출:width= " << width << "height= " << height << endl;
//	}
//	~Rectangle(){cout << "width = " << width << "height = " << height <<"의 소멸자 호출"<< endl;}
//	int area() { return width * height; }
//};
//int add(int a, int b);
//int add(int a, int b)
//{
//	return a + b;
//}
//int  main()
//{
//	Rectangle rect(3,4);
//	int area = rect.area();
//	cout << "사각형의 넓이" << area << endl;
//	int sum = add(3, 4);
//	cout << "두 수의 합:" << sum << endl;
//	return 0;
//}

//class Person {
//	char* name;
//	int id;
//public:
//	Person(int id, const char* name);
//	~Person();
//	//Person(int id2, const char& name);
//	void changeName(const char* name);
//	void show() { cout << id << ',' << name << endl; }
//};
//Person::Person(int id, const char* name)
//{
//	this->id = id;
//	int len = strlen(name);
//	this->name = new char[len + 1];	//name에 동적할당 부여
//	strcpy(this->name, name);
//}
//Person::~Person()
//{
//	if (name)
//		delete[] name;	//☆동적할당 메모리반환//아빠생성하고나서 딸이 생성되었으므로 딸이 소멸되고나서 아빠가 소멸될때 딸이
//						//★반환했기 떄문에 같은 메모리를 참조하고 있는 아빠가 메모리 반환할수없으므로 반환할 때
//						//☆프로그램이 비정상으로 종료된다
//}
////Person::Person(int id2, const char& name)
////{
////	this->id = id2;
////	int len = strlen(&name);
////	this->name = new char[len + 1];
////	strcpy(this->name, &name);
////}
//void Person::changeName(const char* name)
//{
//	if (strlen(name) > strlen(this->name))
//		return;
//	strcpy(this->name, name);
//}
//int main()
//{
//	Person father(1, "Kitae");
//	Person daughther(father);//얕은 복사생성자
//	cout << "daughther 객체생성 직후 ------" << endl;
//	father.show();
//	daughther.show();
//	daughther.changeName("Grace");
//	cout << "daughther 이름을 Grace로 변경한 후 ----------" << endl;
//	father.show();		//
//	daughther.show();	//
//	return 0;
//}

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
	int idshow() { return id; }
	char* nameshow() { return name; }
};
Person::Person(int id, const char* name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name,name);
}
Person::Person(const Person& person)//복사생성자
{
	this->id = person.id;//id복사
	int len = strlen(person.name);//name의 문자개수
	this->name = new char[len + 1];//name을 위한 공간 할당
	strcpy(this->name, person.name);//name 문자열 복사
	cout << "복사생성자 실행 .원본 객체의 이름" << this->name << endl;
}
Person::~Person()
{
	if (name)
		delete[] name;
}
void Person::changeName(const char* name)
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
int main()
{
	Person father(1, "Kitae");
	Person daughther(father);
	cout << father.idshow()<<father.nameshow()<<endl;
	cout << "daughther 객체 생성 직후 ---------------" << endl;
	father.show();
	daughther.show();
	daughther.changeName("Grace");
	cout << "daughther 이름을 Grace로 변경한 후 ------------------------" << endl;
	father.show();
	daughther.show();
	return 0;
}