#include<iostream>
using namespace std;

class Color {
	int r;
	int g;
	int b;
public:
	Color(int r = 0, int g = 0, int b = 0) {
		this->r = r; this->g = g; this->b = b;
	}
	void show() {
		cout << r << " " << g << " " << b << endl;
	}
	friend Color operator+ (Color op1, Color op2);
	friend bool operator== (Color op1, Color op2);
};

Color operator+ (Color op1, Color op2) {
	op1.r += op2.r;
	op1.g += op2.g;
	op1.b += op2.b;
	return op1;
}

bool operator== (Color op1, Color op2) {
	return (op1.r == op2.r && op1.g == op2.g && op1.b == op2.b);
}


int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}