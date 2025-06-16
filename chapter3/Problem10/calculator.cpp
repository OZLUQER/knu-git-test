#include<iostream>
using namespace std;

class Add {
private:
	int n1, n2;
public:
	Add(int a, int b);
	void setValue(int x, int y);
	int calculate();
};
Add::Add(int a, int b) {
	setValue(a, b);
}
void Add::setValue(int x, int y) {
	n1 = x, n2 = y;
}
int Add::calculate() {
	return n1 + n2;
}

class Sub {
private:
	int n1, n2;
public:
	Sub(int a, int b);
	void setValue(int x, int y);
	int calculate();
};
Sub::Sub(int a, int b) {
	setValue(a, b);
}
void Sub::setValue(int x, int y) {
	n1 = x, n2 = y;
}
int Sub::calculate() {
	return n1 - n2;
}

class Mul {
private:
	int n1, n2;
public:
	Mul(int a, int b);
	void setValue(int x, int y);
	int calculate();
};
Mul::Mul(int a, int b) {
	setValue(a, b);
}
void Mul::setValue(int x, int y) {
	n1 = x, n2 = y;
}
int Mul::calculate() {
	return n1 * n2;
}



class Div {
private:
	int n1, n2;
public:
	Div(int a, int b);
	void setValue(int x, int y);
	int calculate();
};
Div::Div(int a, int b) {
	setValue(a, b);
}
void Div::setValue(int x, int y) {
	n1 = x, n2 = y;
}
int Div::calculate() {
	return n1 / n2;
}



int main() {
	int n1, n2;
	char s;
	while (1) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> n1 >> n2 >> s;
		switch (s) {
		case '+':
		{
			Add a(n1, n2);
			cout << a.calculate() << endl;
			break;
		}
		case '-':
		{
			Sub s(n1, n2);
			cout << s.calculate() << endl;
			break;
		}
		case '*':
		{
			Mul m(n1, n2);
			cout << m.calculate() << endl;
			break;
		}
		case '/':
		{
			Div d(n1, n2);
			cout << d.calculate() << endl;
			break;
		}
		}
	}
}