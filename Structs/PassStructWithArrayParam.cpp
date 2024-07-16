#include <iostream>
using namespace std;

struct Data {
    int myarray[5]; // passed by reference
    int size;
};

void ChangeStructArrayParams(Data* data)
{
    data->myarray[2] = 246;
}

int main()
{
    Data data = {{0,1,53}, 3};
    cout << data.myarray[2] << endl;
    ChangeStructArrayParams(&data);
    cout << data.myarray[2] << endl;
    return 0;
}
