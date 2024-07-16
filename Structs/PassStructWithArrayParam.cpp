#include <iostream>
using namespace std;

struct Data {
    int myarray[5];
    int size;
};

void ChangeStructArrayParams(Data* data)
{
    data->myarray[2] = 53;
}
int main()
{
    Data data = {{0,1,2}, 4};

    cout << data.myarray[2] << endl;
    ChangeStructArrayParams(&data);
    cout << data.myarray[2] << endl;

    return 0;
}
