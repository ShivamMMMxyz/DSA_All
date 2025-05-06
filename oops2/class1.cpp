 #include<iostream>
 using namespace std;

class player{
    private:
    int health;
    int age;
    int score;
    int alive;
    public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }
    void sethealth(int health){
        // player::health=health
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setalive(bool alive){
        this->alive=alive;
    }
};  
int addScore(player a,player b){
    return a.getscore()+ b.getscore();
}
player getMaxScorePlayer(player a,player b){
    if(a.getscore()>b.getscore()){
        return a;
    }
    else{
        return b;
    }
}


 int main(){
player shivam;
player sk;  // it is an object
player *shubham = new player; // it is pointer to object
player shubhamobj =*shubham; // it is object


shivam.setage(20);
shivam.sethealth(88);
shivam.setalive(true);
shivam.setscore(99);

 
sk.setage(20);
sk.sethealth(88);
sk.setalive(true);
sk.setscore(99);

shubhamobj.setage(20);
shubhamobj.sethealth(88);
shubhamobj.setalive(true);
shubhamobj.setscore(99);


cout<<addScore(shivam,sk)<<endl;

player Shibum = getMaxScorePlayer(shivam,sk);
cout<<Shibum.getscore()<<endl;


    return 0;
 }