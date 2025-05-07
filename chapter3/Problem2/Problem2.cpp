#include<iostream>
#include<string>
#include<sstream>  
using namespace std;

class Date {
public:
	Date(int y, int m, int d);
	Date(string dt);
	void show();
	int getYear(), getMonth(), getDay();
private:
	int time[3];
};

Date::Date(int y, int m, int d) {
	time[0] = y;
	time[1] = m;
	time[2] = d;
}

Date::Date(string dt) {
	stringstream ss(dt);
	string token;

	for (int i = 0; i < 3; i++) {
		getline(ss, token, '/');
		time[i] = stoi(token);
	}
}

int Date::getYear() {
	return time[0];
}

int Date::getMonth() {
	return time[1];
}

int Date::getDay() {
	return time[2];
}

void Date::show() {
	cout << time[0] << "³â " << time[1] << "¿ù " << time[2] << "ÀÏ" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
