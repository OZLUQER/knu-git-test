#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += i + 1;
	}
	cout << "1에서 10까지 더한 결과는 " << sum << "입니다";
}
