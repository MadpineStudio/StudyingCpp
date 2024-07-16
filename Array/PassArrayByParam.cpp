#include <iostream>
using namespace std;

void ArrayAsParam(int *a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1,2,3,4,5};
    ArrayAsParam(a, 5);
    return 0;
}
