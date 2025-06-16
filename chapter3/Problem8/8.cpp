#include<iostream>
#include<string>
using namespace std;

class Integer {
private:
	int num = 0;
public:
	Integer(int n) {
		num = n;
	}
	Integer(string s) {
		num = stoi(s);
	}
	int get() {
		return num;
	}
	int set(int n) {
		num = n;
		return num;
	}
	int isEven() {
		return true;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}