#include<iostream>
using namespace std;


class Student{
    public:
    int rollno;
    string name;
Student(int  rollno, string name , float marks){
    this->rollno=rollno;
    this->name=name;
    this->marks=marks;
}
void display(){
    cout<<marks<<" "<<rollno<<" "<<name<<endl;  
}
void getmarks(){ //getter function
    cout<<marks<<endl;
}
void setmarks(float marks){ //setter function
    this->marks=marks;
}

    private:
    float marks;


 
};

int main(){

Student s1(1, "Shivam", 99.0);
s1.display();
s1.getmarks(); // this will not work because marks is private and we cannot access it outside the class. We can only access it inside the class.

s1.setmarks(100.0); // this will work because we are using setter function to set the value of marks.
s1.getmarks(); 
}