#include<iostream>
#include<cstring>
using namespace std;
int main(){

class Player{ // it is a class only
public:

    int score;
int health;
void showHealth(){
cout<<"Health is : "<<health;
};
char name[20];
};

Player shivam; // variable it an object now
shivam.score =90;
shivam.health=100;
strcpy(shivam.name, "Shivam");
// shivam.name="naam";
cout<<shivam.score<<endl;
cout<<shivam.health<<endl;
cout<<shivam.name<<endl;

Player naitik;
naitik.score =0;
naitik.health=0;
shivam.showHealth();

Player Player[100];
// here scre and health name are data memebers

}