#include<iostream>
using namespace std;

class vehicle{ // base class or parent class 
    public:
    int topspeed;
    float milege;
    string fuel;
 
};
class twoWheeler :public vehicle{ // derived class or child class
    public:
    int gears;
};
class scooty :public twoWheeler{ // derived class or child class
    public:
    int bootspace; // multilevel inheritance
};

class car :public vehicle{
    public:
    int gears;

};
class bike :public vehicle{ // derived class or child class
    public:
};
class truck :public vehicle{ // derived class or child class
    public:
   
};

int main(){
    bike b1;
    b1.topspeed=100;
    b1.milege=50.0;
 







}