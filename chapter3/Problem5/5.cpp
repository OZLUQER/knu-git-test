#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {
private:
	int n = 0;
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};

Random::Random() {
	n = 0;
}

int Random::next() {
	n = rand();
	return n;
}

int Random::nextInRange(int a, int b) {
	n = a + rand() % (b+1 - a);
	return n;
}

int main() {
	srand((unsigned)time(0));
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}