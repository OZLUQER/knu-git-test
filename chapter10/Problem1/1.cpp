#include <iostream>
using namespace std;

template <class T>
T biggest(T src[], int y) {
    T max = src[0];
    for (int i = 1; i < y; i++) {
        if (max < src[i])
            max = src[i];
    }
    return max;
}

int main() {
    int x[] = { 1, 2, 3, 4, 5 };
    int y[] = { 3, 4, 5, 6, 7 };
    int z[] = { 5 ,6, 7, 8, 10 };
    cout << biggest(x, 5) << endl;
    cout << biggest(y, 5) << endl;
    cout << biggest(z, 5) << endl;
    return 0;
}
