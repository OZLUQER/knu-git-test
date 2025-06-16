#include<iostream>
using namespace std;

class Matrix {
	int a1, a2, a3, a4;
public:
	Matrix(int a1 = 0, int a2 = 0, int a3 = 0, int a4 = 0) {
		this->a1 = a1; this->a2 = a2; this->a3 = a3; this->a4 = a4;
	}
	void show();
	Matrix operator+ (Matrix op1);
	Matrix& operator+= (Matrix& op1);
	bool operator== (Matrix op1);
};

void Matrix::show() {
	cout << "Matrix = { " << a1 << " " << a2 << " " << a3 << " " << a4 << " }" << endl;
}

Matrix Matrix::operator+ (Matrix op1) {
	Matrix tmp;
	tmp.a1 = a1 + op1.a1;
	tmp.a2 = a2 + op1.a2;
	tmp.a3 = a3 + op1.a3;
	tmp.a4 = a4 + op1.a4;
	return tmp;
}

Matrix& Matrix::operator+= (Matrix& op1) {
	a1 += op1.a1;
	a2 += op1.a2;
	a3 += op1.a3;
	a4 += op1.a4;
	return *this;
}

bool Matrix::operator== (Matrix op1) {
	return (a1 == op1.a1 && a2 == op1.a2 && a3 == op1.a3 && a4 == op1.a4);
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}