#include <iostream>
using namespace std;

void ArrayAsParam(int a[], int n) {
    a[0] = 12;
    a[3] = 104;
    cout << endl;
}

int main()
{
    int a[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
        cout << a[i] << ", ";
    cout << endl;

    ArrayAsParam(a, 5);
    for(int i = 0; i < 5; i++)
        cout << a[i] << ", ";
    cout << endl;

    return 0;
}
