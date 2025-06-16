#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char passwordin[11];
	char passwordout[11];
	cout << "새 암호를 입력하세요>>";
	cin.getline(passwordin, 100, '\n');
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin.getline(passwordout, 100, '\n');
	if (strcmp(passwordin, passwordout) == 0) {
		cout << "같습니다";
	}
	else {
		cout << "같지 않습니다";
	}
}