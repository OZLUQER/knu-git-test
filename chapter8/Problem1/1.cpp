#include <iostream>
#include <string>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string nAme;
public:
    NamedCircle(int r = 0, string nm = "") : Circle(r) {
        nAme = nm;
    }

    void show() {

        cout << "반지름이 " << getRadius() << "인 " << nAme << endl;

    }
};

int main() {

    NamedCircle wAffle(3, "waffle");

    wAffle.show();

    return 0;
}
