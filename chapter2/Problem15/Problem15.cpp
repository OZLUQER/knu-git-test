/*#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int num1, num2;
	char Cal;

	while (true)
	{
		cout << "? ";
		cin >> num1 >> Cal >> num2;
		switch (Cal)
		{
		case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n" << endl;
			break;
		case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n" << endl;
			break;
		case '*': cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n" << endl;
			break;
		case '/': cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n" << endl;
			break;
		case '%': cout << num1 << " % " << num2 << " = " << num1 % num2 << "\n" << endl;
			break;
		default:
			cout << "잘못입력하셨습니다.";
			break;
		}
	}
}*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int num1 = 0, num2 = 0;
	char Cal[100];
	char* mainText, * call;

	while (true)
	{
		cout << "? ";
		cin.getline(Cal, 100);

		num1 = atoi(strtok_s(Cal, " ", &mainText));
		call = strtok_s(NULL, " ", &mainText);
		num2 = atoi(strtok_s(NULL, " ", &mainText));

		if (*call == '+')
		{
			cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n" << endl;
		}
		else if (*call == '-')
		{
			cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n" << endl;
		}
		else if (*call == '*')
		{
			cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n" << endl;
		}
		else if (*call == '/')
		{
			cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n" << endl;
		}
		else if (*call == '%')
		{
			cout << num1 << " % " << num2 << "=" << num1 % num2 << "\n" << endl;
		}
	}
}