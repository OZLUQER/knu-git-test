#include <iostream>
#include <string>

using namespace std;

class Point {
    int Xx, yy;
public:
    Point(int Xx, int yy) { this->Xx = Xx; this->yy = yy; }
    int getX() { return Xx; }
    int getY() { return yy; }
protected:
    void move(int Xx, int yy) { this->Xx = Xx; this->yy = yy; }
};

class ColorPoint : public Point {
    string cOlor;
public:
    ColorPoint(int xX, int yY, string cOlor) : Point(xX, yY) {
        this->cOlor = cOlor;
    }

    void setPoint(int xX, int yY) {
        move(xX, yY);
    }

    void setColor(string cOlor) {
        this->cOlor = cOlor;
    }

    void show() {
        cout << cOlor << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
    }
};

int main() {
    ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}
