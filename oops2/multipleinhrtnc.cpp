#include<iostream>
using namespace std;

class cricketer{
    public:
    string name;
    int runs;
    float average;
    
};
class engineer{
    public:
    string name;
    int salary;
    float experience;
    
};
class phodu : cricketer, engineer{ // multiple inheritance
    public:
    string name;
    int runs;
    float average;
    
};




int main(){

}