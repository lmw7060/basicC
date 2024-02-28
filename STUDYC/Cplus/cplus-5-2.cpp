#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//class Rectangle {
//	int width, height;
//public:
//	Rectangle() { width = 1, height = 1; cout << "�⺻������ ȣ��:width= " << width<<"height= "<< height << endl; }
//	Rectangle(int width, int height) { this->width = width; this->height = height;
//	cout<<"������2 ȣ��:width= " << width << "height= " << height << endl;
//	}
//	~Rectangle(){cout << "width = " << width << "height = " << height <<"�� �Ҹ��� ȣ��"<< endl;}
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
//	cout << "�簢���� ����" << area << endl;
//	int sum = add(3, 4);
//	cout << "�� ���� ��:" << sum << endl;
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
//	this->name = new char[len + 1];	//name�� �����Ҵ� �ο�
//	strcpy(this->name, name);
//}
//Person::~Person()
//{
//	if (name)
//		delete[] name;	//�ٵ����Ҵ� �޸𸮹�ȯ//�ƺ������ϰ��� ���� �����Ǿ����Ƿ� ���� �Ҹ�ǰ��� �ƺ��� �Ҹ�ɶ� ����
//						//�ڹ�ȯ�߱� ������ ���� �޸𸮸� �����ϰ� �ִ� �ƺ��� �޸� ��ȯ�Ҽ������Ƿ� ��ȯ�� ��
//						//�����α׷��� ���������� ����ȴ�
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
//	Person daughther(father);//���� ���������
//	cout << "daughther ��ü���� ���� ------" << endl;
//	father.show();
//	daughther.show();
//	daughther.changeName("Grace");
//	cout << "daughther �̸��� Grace�� ������ �� ----------" << endl;
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
Person::Person(const Person& person)//���������
{
	this->id = person.id;//id����
	int len = strlen(person.name);//name�� ���ڰ���
	this->name = new char[len + 1];//name�� ���� ���� �Ҵ�
	strcpy(this->name, person.name);//name ���ڿ� ����
	cout << "��������� ���� .���� ��ü�� �̸�" << this->name << endl;
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
	cout << "daughther ��ü ���� ���� ---------------" << endl;
	father.show();
	daughther.show();
	daughther.changeName("Grace");
	cout << "daughther �̸��� Grace�� ������ �� ------------------------" << endl;
	father.show();
	daughther.show();
	return 0;
}