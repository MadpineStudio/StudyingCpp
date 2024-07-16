#include <iostream>
using namespace std;

template<class T>
class Data
{
public:
    T a;
    T b;

    Data(int a, int b) {
        this->a = a;
        this->b = b;
    }
    T Add();
    T Sub();
};

template<class T>
T Data<T>::Add() {
    return a + b;
}
template<class T>
T Data<T>::Sub() {
    return a - b;
}

int main()
{
    Data<int> dataInt(10, 34);
    Data<float> dataFloat(10.3f, 3.4f);
    cout << dataInt.Add() << endl;
    cout << dataFloat.Add() << endl;
    return 0;
}
