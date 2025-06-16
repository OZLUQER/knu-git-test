#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 11; j++) {
			std::cout << i * 10 + j << "\t";
		}
		std::cout << "\n";
	}
}