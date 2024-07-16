#include <iostream>
using namespace std;

struct Data {
    int a;
};
Data* CreateInHeap()
{
    Data *data = (Data *) malloc(sizeof(Data));
    return data;
}

int main()
{
    Data* data = CreateInHeap();
    data->a = 85;
    cout << data->a << endl;

    delete(data);
    return 0;
}
