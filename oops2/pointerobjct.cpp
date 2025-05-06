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
};
void change(Cricketer *c){
    c->runs= 22222;
}

int main(){
   Cricketer c1("virat", 10000);
    Cricketer c2("sachin", 20000);

  Cricketer * p1=&c1; // pointer to object
cout<< c1.runs<<endl; // 10000
cout<< p1->runs<<endl; // 10000
cout<< (*p1).runs<<endl; // 10000

(*p1).runs=20000; // this will change the value of runs in c1 object
cout<< c1.runs<<endl; // 20000
cout<< (*p1).runs<<endl;    // 20000

// a->b is same as (*a).b

int *ptr =new int(43243); 
 cout<<*ptr<<endl; // 43243

 Cricketer *p2=new Cricketer("Shivam", 10000,43); // pointer to object
cout<<p2->name<<endl; // Shivam
cout<<p2->runs<<endl; // 10000  
cout<<p2->average<<endl; // 43









}
