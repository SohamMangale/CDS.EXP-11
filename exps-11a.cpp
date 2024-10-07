//soham
//entc B1
//23070123084
//experiment 11
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "Winning Speaech";
    string genre = "Punjabji";
    string country = "India";
    int year = 2024;
    

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