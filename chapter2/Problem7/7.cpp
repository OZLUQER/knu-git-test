#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char endkey[11];
	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(endkey, 100, '\n');
		if (strcmp(endkey, "yes") == 0) {
			cout << "종료합니다...";
			break;
		}
		else {
			continue;
		}
	}
}