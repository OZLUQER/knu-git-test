#include<iostream>
#include "Oval.h"
using namespace std;

Oval::Oval() {
	width = 1;
	height = 1;
}

Oval::Oval(int a, int b) {
	width = a;
	height = b;
}

void Oval::set(int a, int b) {
	width = a;
	height = b;
}

int Oval::getHeight() {
	return height;
}

int Oval::getWidth() {
	return width;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : ";
	show();
}