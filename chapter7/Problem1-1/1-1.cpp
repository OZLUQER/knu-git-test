#include <iostream>
#include <string>

using namespace std;

class Book {
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << endl;
    }

    string getTitle() { return title; }

    Book& operator +=(int addPrice) {
        this->price += addPrice;
        return *this;
    }

    Book& operator -=(int reducePrice) {
        this->price -= reducePrice;
        return *this;
    }
};

int main() {
    Book firstBook("청춘", 20000, 300);
    Book secondBook("미래", 30000, 500);

    firstBook += 500;  
    secondBook -= 500; 

    firstBook.show();
    secondBook.show();

    return 0;
}
