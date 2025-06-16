#include <iostream>
using namespace std;

template <class T>
void reverseArray(T x[], int size) {
    for (int i = 0; i < size / 2; i++) {
        T temp = x[i];
        x[i] = x[size - 1 - i];
        x[size - 1 - i] = temp;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArray(x, 5);
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}
