#include <iostream>
using namespace std;

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 10;
    int b = 20;

    cout << "before swap: \n" << "a: " << a << " b: " << b << endl;
    Swap(&a, &b);
    cout << "after swap: \n" << "a: " << a << " b: " << b << endl;

    return 0;
}
