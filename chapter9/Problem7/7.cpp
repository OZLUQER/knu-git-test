#include <iostream>

using namespace std;

class Shape {
protected:
    string name;
    int width, height;
public:
    Shape(string n = "", int w = 0, int h = 0) {
        name = n;
        width = w;
        height = h;
    }
    virtual double getArea() { return 0; }
    string getname() { return name; }
};

class Oval : public Shape {
public:
    Oval(string s, int a, int b) : Shape(s, a, b) {

    }

    double getArea() {
        double tmp = width;

        tmp = tmp * height;

        return tmp * 3.14;
    }
};

class Rect : public Shape {
public:
    Rect(string s, int a, int b) : Shape(s, a, b) {

    }

    double getArea() {
        int area;
        area = width * height;
        return area;
    }
};

class Triangular : public Shape {
public:
    Triangular(string s, int a, int b) : Shape(s, a, b) {

    }

    double getArea() {
        double x;
        x = width * height;
        x = x / 2;
        return x;
    }
};

int main() {
    Shape* p[3];
    p[0] = new Oval("ºó´ë¶±", 10, 20);
    p[1] = new Rect("Âû¶±", 30, 40);
    p[2] = new Triangular("Åä½ºÆ®", 30, 40);

    for (int i = 0; i < 3; i++) {
        cout << p[i]->getname() << " ³ÐÀÌ´Â " << p[i]->getArea() << endl;
    }

    for (int i = 0; i < 3; i++) delete p[i];
    return 0;
}
