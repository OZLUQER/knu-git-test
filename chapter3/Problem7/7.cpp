#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class SelectableRandom {
private:
	int n = 0;
public:
	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	n = 0;
}

int SelectableRandom::next() {
	n = 1;
	while (n % 2 == 1) {
		n = rand();
	}
	return n;
}

int SelectableRandom::nextInRange(int a, int b) {
	n = 0;
	while (n % 2 == 0) {
		n = a + rand() % (b + 1 - a);
	}
	return n;
}

int main() {
	srand((unsigned)time(0));
	SelectableRandom r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}