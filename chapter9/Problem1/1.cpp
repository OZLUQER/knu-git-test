#include <iostream>

using namespace std;

class Converter {
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public:
    Converter(double ratio) { this->ratio = ratio; }
    void run() {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
        cout << getSourceString() << "을 입력하세요>> ";
        cin >> src;
        cout << "변환 결과: " << convert(src) << getDestString() << endl;
    }
};

class WonToDollar : public Converter {
public:
    WonToDollar(double val = 0.0)
        : Converter(val) {


    }

    double convert(double x) {

        double tmp = x / ratio;

        return tmp;
    }

    string getSourceString() {


        return "원";
    }

    string getDestString() {

        string s = "달러";
        return s;
    }
};

int main() {
    WonToDollar wd(1010);
    wd.run();

    return 0;
}
