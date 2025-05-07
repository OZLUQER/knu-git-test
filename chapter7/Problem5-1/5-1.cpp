#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Color {
    int red;
    int green;
    int blue;

public:
    Color() : Color(0, 0, 0) {}
    Color(int r, int g, int b) {
        red = r; green = g; blue = b;
    }

    void show() {
        cout << red << ' ' << green << ' ' << blue << endl;
    }

    Color operator +(Color c) {
        Color result;
        result.red = red + c.red;
        result.green = green + c.green;
        result.blue = blue + c.blue;
        return result;
    }

    bool operator ==(Color c) {
        return (red == c.red && green == c.green && blue == c.blue);
    }
};

int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();

    Color fuchsia(255, 0, 255);
    if (c == fuchsia)
        cout << "보라색 맞음" << endl;
    else
        cout << "보라색 아님" << endl;
}