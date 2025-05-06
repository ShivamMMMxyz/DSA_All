#include<iostream>
using namespace std;

class loading{
    public:
    void sum(int a, int b ){

cout<<a+b<<endl;
    }
    void sum (int a, int b, int c){ // function overloading
// function overloading is a feature of OOPs which allows us to create multiple functions with same name but different parameters. It is used to perform the same operation on different data types or different number of arguments.
       
cout<<a+b+c<<endl;
    }
};

int main(){
    loading l1;
    l1.sum(2,3);
    l1.sum(2,3,4);
    return 0;

}