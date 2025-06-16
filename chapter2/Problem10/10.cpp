#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

int main() {
	char hello[100];
	cout << "문자열 입력>>";
	cin >> hello;
	for (int i = 1; i < strlen(hello) + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << hello[j];
		}
		cout << "\n";
	}
}