#include<iostream>
#include<cstring>
using namespace std;
int main(){

class Player{ // it is a class only
private:

    int score;
int health;

public:
// setter
void setscore(int s){
    score =s;
}
void sethealth(int h){
    health= h;
}

//getter
int getscore(){
    return score;
}
int gethealth(){
    return health;
}


void showHealth(){
cout<<"Health is : "<<health;
};

};

Player shivam; // variable it an object now
// shivam.score =90;  
// shivam.health=100;
shivam.sethealth(55);
shivam.setscore(90);

cout<<shivam.gethealth()<<endl;
cout<<shivam.getscore();


}