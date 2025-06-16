#include<iostream>
using namespace std;

class Color{
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
	Color operator+ (Color op1);
	bool operator== (Color op1);
};

Color Color::operator+ (Color op1) {
	Color tmp;
	tmp.r = r + op1.r;
	tmp.g = g + op1.g;
	tmp.b = b + op1.b;
	return tmp;
}

bool Color::operator== (Color op1) {
	if (r == op1.r && g == op1.g && b == op1.b) {
		return true;
	}
	else
		return false;
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