#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

class Student{
    public:
    string name;
    int rno;
    float gpa;

    Student(){
        // default constructor
    }

Student(string s, int r, float g){
    name=s;
    rno=r;
    gpa=g;
} // parameterized constructor

Student(string s, int r){
    name=s;
    rno=r;
    
} // we can make multiple constructors with different parameters. This is called constructor overloading.
// constructor overloading is a feature of OOPs which allows us to create multiple constructors with different parameters. It is used to initialize the data members of the
};
// constructor is a special member function of class which is automatically called when an object of the class is created. It has same name as the class and does not have any return type. It is used to initialize the data members of the class.


int main(){
  
Student s1("Shivam", 1, 9.0);


// constructor is called when the object is created. It initializes the data members of the class.
// instead of writing s1.name="Shivam"; s1.rno=1; s1.gpa=9.0; we can write this in the constructor itself.



Student s2; //it is created using default constructor
// default constructor is called when the object is created. It initializes the data members of the class to default values.
s2.name="Shubham";
s2.rno=2;   

s2.gpa=8.0;
Student s3("Shivam", 11); 

cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl; 

cout<<s3.name<<" "<<s3.rno<<endl;


Student s4 = s1; // copy constructor is called when the object is created using another object. It initializes the data members of the class to the values of the other object.
 s4.name="Shivammmmmmm";// so it is deep copy constructor. It is used to create a new object with the same values as the other object.

cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;

Student s5(s1); 
s5.name="Shiva";// so it is also a deep copy constructor. 
cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl; 

}