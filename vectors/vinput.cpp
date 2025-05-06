#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;
for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);// to take input in vector if size is not declared while initializing
}
for (int i = 0; i < 5; i++)
{
    cout<<v[i];
}







}