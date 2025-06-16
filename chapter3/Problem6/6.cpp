#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class EvenRandom {
private:
	int n = 0;
public:
	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};

EvenRandom::EvenRandom() {
	n = 0;
}

int EvenRandom::next() {
	n = 1;
	while (n % 2 == 1) {
		n = rand();
	}
	return n;
}

int EvenRandom::nextInRange(int a, int b) {
	n = 1;
	while (n % 2 == 1) {
		n = a + rand() % (b + 1 - a);
	}
	return n;
}

int main() {
	srand((unsigned)time(0));
	EvenRandom r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}