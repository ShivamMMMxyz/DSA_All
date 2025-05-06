#include<iostream>
using namespace std;

class scooty{ // base class or parent class 
    public:
    int topspeed;
    float milege;
    private:
    int bootspace;
};
class bike :public  scooty{ // derived class or child class
    public:
    int gears;
};

int main(){
    bike b1;
    b1.topspeed=100;
    b1.milege=50.0;
    b1.gears=5;







}