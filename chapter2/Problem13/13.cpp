#include<iostream>
using namespace std;

int pnum() {
	int pn;
	cout << "몇 인분?";
	cin >> pn;
	return pn;
}

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다 *****\n";
	int endkey = 0;
	int select;
	int pn;

	while (endkey == 0) {
		cout << "짬뽕:1, 짜장:2, 군만두:3 종료:4>>   ";
		cin >> select;
		switch (select) {
		case 1:
			pn = pnum();
			cout << "짬뽕 " << pn << "인분 나왔습니다\n";
			break;
		case 2:
			pn = pnum();
			cout << "짜장 " << pn << "인분 나왔습니다\n";
			break;
		case 3:
			pn = pnum();
			cout << "군만두 " << pn << "인분 나왔습니다\n";
			break;
		case 4:
			cout << "오늘 영업은 끝났습니다.";
			endkey++;
			break;
		default:
			cout << "다시 주문하세요!!\n";
			break;
		}
	}
}