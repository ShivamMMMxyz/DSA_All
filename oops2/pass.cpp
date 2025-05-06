#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

class player{
    public:
    int health;
    int age;
    int score;
    bool alive;
};
void printPlayer(player p){
    cout<<"Health: "<<p.health<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Score: "<<p.score<<endl;
    cout<<"Alive: "<<p.alive<<endl;
}

void change(int &a){
    a=100;
}

void change1(player& a){
    a.health=100;
    a.age=100;
    a.score=100;
    a.alive=true;
}  

int main(){
    player shivam;
    shivam.score=99;
    shivam.age=20;
    shivam.health=88;
    shivam.alive=true;


    // cout<<shivam.score<<endl;
    // cout<<shivam.age<<endl;
 printPlayer(shivam);

 change1(shivam); // this will not change the original object because it is passed by value
 cout<<shivam.score<<endl; // this will change the original object because it is passed by reference as there is & in the function
 cout<<shivam.age<<endl;    
   
int x= 4;
change(x);
// cout<<x<<endl; // x will not be changed because it is passed by value
}