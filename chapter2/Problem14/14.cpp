#include<iostream>
using namespace std;

int main() {
	int amount = 0;
	int test = 0;
	int x = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	do {
		x = 0;
		if (amount >= 20000) {
			cout << "오늘 " << amount << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			test++;
		}
		else {
			cout << "주문>> ";
			char coffee[100]; int num; cin >> coffee >> num;
			if (strcmp("에스프레소", coffee) == 0) {
				x = num * 2000;
				amount += x;
				cout << x << "원입니다. 맛있게 드세요" << endl;
			}
			else if (strcmp("카푸치노", coffee) == 0) {
				x = num * 2500;
				amount += x;
				cout << x << "원입니다. 맛있게 드세요" << endl;
			}
			else if (strcmp("아메리카노", coffee) == 0) {
				x = num * 2300;
				amount += x;
				cout << x << "원입니다. 맛있게 드세요" << endl;
			}
		}
	} while (test == 0);
}