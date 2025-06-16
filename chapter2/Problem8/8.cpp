#include<iostream>
#pragma warning(disable:4996)
#include<cstring>
using namespace std;

int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n";
	char name[100];
	int max = 0;
	char maxname[100];
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";
		if (max < strlen(name)) {
			max = strlen(name);
			strcpy(maxname, name);
		}
	}
	cout << "가장 긴 이름은 " << maxname;
}