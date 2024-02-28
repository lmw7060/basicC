#include <iostream>
#include <string>	//length()
#include <cstring>
using namespace std;

//int main()
//{
//	string str;
//	string address("서울시 성북구 삼선동 389");
//	string copyAddress(address);
//
//	char text[] = { 'L','O','V','E',' ','C','+','+','\0' };
//	string title(text);
//
//	cout << str << endl;
//	cout <<"str의길이:" << str.length() << endl;
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//	cout <<"title의길이:" << title.length() << endl;
//	cout <<"title의사이즈:" << title.size() << endl;
//	cout <<"title의공간:" << title.capacity() << endl;
//	cout <<"title의길이의 사이즈:" << sizeof(title.length()) << endl;
//}

//int main()
//{
//	string names[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "이름>>";
//		getline(cin, names[i], '\n');
//	}
//	string latter = names[0];
//	for (int i = 1; i < 5; i++) {
//		if (latter < names[i]) {
//			latter = names[i];
//		}
//	}
//	cout << "사전에서 가장 뒤에 나오는 문자열은" << latter << endl;
//}

//int main()
//{
//	string s;
//	cout << "아래에 문자열을 입력하시오. 빈칸이 있어도 됩니다.(한글안됨)" << endl;
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
//	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하시오." << endl;
//	getline(cin, s, '\n');
//	int sum = 0;	//합 정의
//	int startIndex = 0;	//시작 인데스
//	while (true) {
//		int fIndex = s.find('+', startIndex);	//+찾음
//		if (fIndex == -1) {	//+가 없으면
//			string part = s.substr(startIndex);	//시작부터 나열
//			if (part == "") break;	//+로 끝나면
//			cout << part << endl;
//			sum += stoi(part);	//수로 변환
//			break;
//		}
//		int count = fIndex - startIndex;	//문자개수
//		string part = s.substr(startIndex, count);	//개수 파악하여
//		cout << part << endl;
//		sum += stoi(part);
//		startIndex = fIndex + 1;
//	}
//	cout << "숫자들의 합은" << sum;
//}