#include <iostream>
using namespace std;

struct Data {
    int a;
    static int Size(){ return sizeof(int); }
};
class DataClass {
public:
    int a;
    int Size(){ return sizeof(int); }
};

int main()
{
    auto data = new Data{13};
    cout << Data::Size() << endl;
    delete(data);
    return 0;
}
