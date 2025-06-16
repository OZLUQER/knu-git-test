#include<iostream>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";
	char str[100];
	cin.getline(str, 100, '\n');
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x') {
			cnt++;
		}
	}
	cout << "x의 개수는 " << cnt;
}