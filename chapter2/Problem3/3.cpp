#include<iostream>
using namespace std;

int main() {
	cout << "두 수를 입력하여라>>";
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}
}