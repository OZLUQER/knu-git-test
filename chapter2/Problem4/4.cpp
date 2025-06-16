#include<iostream>
using namespace std;

int main() {
	cout << "5개의 실수를 입력하여라>>";
	double a[6];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	double max;
	max = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << "제일 큰 수 = " << max;
}