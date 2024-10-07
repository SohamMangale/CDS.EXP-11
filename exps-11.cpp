//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Car{
    public:
    string make = "BMW";
    string model = "M4";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;
}