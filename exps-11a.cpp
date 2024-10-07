//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "Muse";
    string genre = "Rock";
    string country = "England";
    int year = 1994;
    

    void displayInfo(){
cout<< "Band details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Genre: "<< genre<<endl;
 cout <<"Origin: "<< country<<endl;
 cout <<"Established: "<<year<<endl;
    }
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    }