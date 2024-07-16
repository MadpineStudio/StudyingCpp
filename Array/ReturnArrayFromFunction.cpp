#include <iostream>
using namespace std;

int* ReturnArray(int size)
{
    int* a;
    a = (int *) malloc(sizeof(int) * size);
    a[0] = 15;
    return a;
}

int main()
{
    int* a = ReturnArray(5);
    cout << a[0] << endl;
    return 0;
}
