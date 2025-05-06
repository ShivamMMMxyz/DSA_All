 #include<iostream>
 #include<vector>
 using namespace std;   


 class scooty{
    public:
    int speed;
    int price;
  virtual  void sound(){
        cout<<"brooom brooom"<<endl;
    }
    private:
    int milage;
 };
 class bike :public scooty{ 
    public:
    int gears;
    void sound(){
        cout<<"vroom vroom"<<endl;
    }
    
 };

 int main(){

// bike b1;
// b1.speed=100;     
// b1.sound();

scooty *s1=new scooty(); // base class pointer to derived class object
s1->sound(); // calls the base class sound() function



vector<scooty*> v; // vector of base class pointers




 }