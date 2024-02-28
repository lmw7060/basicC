#include <iostream>
#include <cstring>
#include <string>
//int main()
//{
//	std::cout << "hello\n";
//	std::cout << "첫 번째 맛보기입니다.";
//	return 0;
//}

//using namespace std;
//double area(int r);
//int main() 
//{
//	int n = 3;
//	char c = '#';
//	cout << c << 5.5 << '-' << "hello" << true << endl;
//	cout << "n+5" << n + 5 << '\n';
//	cout << "면적은" << area(n);
//}
//double area(int r)
//{
//	return 3.14 * r * r;
//}

//double area(int r);
//double area(int r)
//{
//	return 3.14 * r * r;
//}
//int main()
//{
//	int n = 3;
//	char c = '#';
//	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
//	std::cout << "n+5=" << n + 5 << '\n';
//	std::cout << "면적은" << area(n);
//}

//using namespace std;
//int main()
//{
//	cout << "너비를 입력하세요>>";
//	int width;
//	cin >> width;
//	cout << "높이를 입력하세요>>";
//	int height;
//	cin >> height;
//	int area = width * height;
//	cout << "면적은" << area << "\n";
//}

//using namespace std;
//int main()
//{
//	cout << "이름을 입력하세요";
//	char name[11];
//	cin >> name;
//	cout << "이름은 " << name << "입니다.\n";
//}

//using namespace std;
//int main()
//{
//	char password[11];
//	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
//	while (true)
//	{
//		cout << "암호>>";
//		cin >> password;
//		if (strcmp(password, "C++") == 0)
//		{
//			cout << "프로그램을 정상 종료합니다." << endl;
//			break;
//		}
//		else
//			cout << "암호가 틀립니다~~" << endl;
//	}
//}

//using namespace std;
//int main()
//{
//	cout << "주소를 입력하세요>>";
//	char address[100];
//	cin.getline(address, 100, '\n');
//	cout << "주소는" << address << "입니다.\n";
//}

//using namespace std;
//int main()
//{
//	string song("Falling in love with you");//string 클래승 song이라는 객체 생성
//	string elvis("Elvis Presley");
//	string singer;
//	cout << song + "를 부른 가수는";
//	cout << "(힌트 : 첫 글자는 " << elvis[0] << ")?";
//	getline(cin, singer);	//cin객체에 있는 값을 singer 변수에 저장
//	if (singer == elvis)
//		cout << "OK";
//	else
//		cout << "틀렸습니다." + elvis + "입니다." << endl;
//}