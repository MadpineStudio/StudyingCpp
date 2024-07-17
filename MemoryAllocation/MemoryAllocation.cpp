#include <iostream>
using namespace std;

// alocando memoria staticamente na Heap e deletando apos uso
int main()
{
    int* p = static_cast<int *>(malloc(sizeof(int) * 5));
    p[0] = 14;
    cout << p[0] << endl;
    delete []p;
    p = nullptr;
    return 0;
}
