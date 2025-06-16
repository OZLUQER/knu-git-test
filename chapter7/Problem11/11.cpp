#include<iostream>
using namespace std;

//만들어야 할 연산자 : << , ! , >> 
//stack구조 구현하기

class Stack {
	int arr[100];
	int cnt = -1;
public:
	bool operator!();
	Stack& operator<< (int op1);
	Stack& operator>> (int& x);
};

Stack& Stack::operator<< (int op1) {
	arr[++cnt] = op1;
	return *this;
}

bool Stack::operator!() {
	if (cnt == -1) return true;
	else return false;
}

Stack& Stack::operator>> (int& x) {
	x = arr[cnt--];
	return *this;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack)break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}