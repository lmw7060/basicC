#include <iostream>
#include <string>	//length()
#include <cstring>
using namespace std;

//int main()
//{
//	string str;
//	string address("����� ���ϱ� �Ｑ�� 389");
//	string copyAddress(address);
//
//	char text[] = { 'L','O','V','E',' ','C','+','+','\0' };
//	string title(text);
//
//	cout << str << endl;
//	cout <<"str�Ǳ���:" << str.length() << endl;
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//	cout <<"title�Ǳ���:" << title.length() << endl;
//	cout <<"title�ǻ�����:" << title.size() << endl;
//	cout <<"title�ǰ���:" << title.capacity() << endl;
//	cout <<"title�Ǳ����� ������:" << sizeof(title.length()) << endl;
//}

//int main()
//{
//	string names[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "�̸�>>";
//		getline(cin, names[i], '\n');
//	}
//	string latter = names[0];
//	for (int i = 1; i < 5; i++) {
//		if (latter < names[i]) {
//			latter = names[i];
//		}
//	}
//	cout << "�������� ���� �ڿ� ������ ���ڿ���" << latter << endl;
//}

//int main()
//{
//	string s;
//	cout << "�Ʒ��� ���ڿ��� �Է��Ͻÿ�. ��ĭ�� �־ �˴ϴ�.(�ѱ۾ȵ�)" << endl;
//	getline(cin, s, '\n');
//	int len = s.length();
//	for (int i = 0; i < len; i++)
//	{
//		string first = s.substr(0, 1);
//		string sub = s.substr(1, len - 1);
//		s = sub + first;
//		cout << s << endl;
//	}
//}

//int main()
//{
//	string s;
//	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��Ͻÿ�." << endl;
//	getline(cin, s, '\n');
//	int sum = 0;	//�� ����
//	int startIndex = 0;	//���� �ε���
//	while (true) {
//		int fIndex = s.find('+', startIndex);	//+ã��
//		if (fIndex == -1) {	//+�� ������
//			string part = s.substr(startIndex);	//���ۺ��� ����
//			if (part == "") break;	//+�� ������
//			cout << part << endl;
//			sum += stoi(part);	//���� ��ȯ
//			break;
//		}
//		int count = fIndex - startIndex;	//���ڰ���
//		string part = s.substr(startIndex, count);	//���� �ľ��Ͽ�
//		cout << part << endl;
//		sum += stoi(part);
//		startIndex = fIndex + 1;
//	}
//	cout << "���ڵ��� ����" << sum;
//}