#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
 class fraction{
     public:
     int num;
     int den;
     fraction(int num, int den){
         this->num=num;
         this->den=den;
     }
     void print(){
         cout<<num<<"/"<<den<<endl;
     }
     
     fraction operator+(fraction f2){
        int newnum=num*f2.den+f2.num*den; // new numerator of the sum of two fractions
    int newden=den*f2.den; // new denominator of the sum of two fractions
    fraction fnew(newnum, newden); // create a new fraction object with the new numerator and denominator
    return fnew;
    
    }
      
 };


int main(){
    fraction f1(2,3);
    fraction f2(3,4);
    f1.print(); // 2/3
    f2.print(); // 3/4
    // fraction f3=f1.add(f2); // operator overloading
 fraction  f3 = f1 + f2; // operator overloading
    f3.print(); // 17/12
    return 0;

}