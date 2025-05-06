#include<iostream>
using namespace std;

class Book{
    public:
char name ;
int price;
int noofpages;

int countbooka(int p){
    if(price<p) return 1;
    else return 0;
}

int isbookPresent(char book){
    if(name==book) return true;
    else return false;
}
};
int main(){
Book harry;
harry.name= 'H';
harry.price = 1000;
harry.noofpages=450;
cout<<harry.countbooka(2000)<<endl;
cout<<harry.isbookPresent('harry')<<endl;
cout<<harry.countbooka(2000);






}