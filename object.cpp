#include<iostream>
using namespace std;
class car{
    public:
    string model;
    string brand;
};
int main()
{
    car car1;
    car1.model="ford";
    car1.brand="X5";
    cout << car1.model << "" << endl;
    cout << car1.brand << " ";
    return 0;
}
