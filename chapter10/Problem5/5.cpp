#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
    T* p = new T[sizea + sizeb];
    for (int i = 0; i < sizea; i++)
        p[i] = a[i];
    for (int i = 0; i < sizeb; i++)
        p[i + sizea] = b[i];
    return p;
}

int main() {
    int xInt[] = { 1, 2, 3, 4, 5 };
    int yInt[] = { 6, 7, 8, 9, 10 };
    int xSize = sizeof(xInt) / sizeof(int);
    int ySize = sizeof(yInt) / sizeof(int);
    int* p = concat(xInt, xSize, yInt, ySize);
    for (int i = 0; i < xSize + ySize; i++)
        cout << p[i] << " ";
    cout << endl;
    delete[] p;

    double xDouble[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double yDouble[] = { 6.6, 7.7, 8.8, 9.9, 10.1 };
    xSize = sizeof(xDouble) / sizeof(double);
    ySize = sizeof(yDouble) / sizeof(double);
    double* q = concat(xDouble, xSize, yDouble, ySize);
    for (int i = 0; i < xSize + ySize; i++)
        cout << q[i] << " ";
    cout << endl;
    delete[] q;

    return 0;
}
