#include <iostream>
using namespace std;

struct Data {
    int a;
};

void ChangeStructValues(Data* data) {
    data->a = 53;
}
int main()
{
    Data data = {24};
    cout << data.a << endl;
    ChangeStructValues(&data);
    cout << data.a << endl;
    return 0;
}
