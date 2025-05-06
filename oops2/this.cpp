#include<iostream>
#include<conio.h>
using namespace std;
class Cricketer{
    public:
    string name;
  int runs;
  float average;
Cricketer(string name, int runs, float average=50){ // constructor is a special member function of class which is automatically called when an object of the class is created. It has same name as the class and does not have any return type. It is used to initialize the data members of the class.
   this->name=name; // this is a pointer to the current object. It is used to access the members of the class.
this->runs=runs;
this->average=average; 

} 
void print(){ 
  cout<<name<<" "<<this->runs<<" "<<average<<endl; // this is a pointer to the current object. It is used to access the members of the class.
} // this is a member function of the class. It is used
int matches(){
    return runs/average;
}  


};

int main(){
   Cricketer c1("virat", 10000);
    Cricketer c2("sachin", 20000);

   c1.print();
   c2.print(); // instead of writing c1.print(); c2.print(); we can write this in the constructor itself.
cout<<c1.matches()<<endl; 

}