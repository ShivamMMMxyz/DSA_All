#include<iostream>
#include<vector>
using namespace std;
int main(){

vector <int> v;  // need not to mention size

v.push_back(4);
cout<<v.size()<<endl;//1
cout<<v.capacity()<<endl; //1
v.push_back(44);
cout<<v.size()<<endl;// 2
cout<<v.capacity()<<endl; //2
v.push_back(430);
cout<<v.size()<<endl;//3
cout<<v.capacity()<<endl;//4
v.push_back(4);
cout<<v.size()<<endl; //4
cout<<v.capacity()<<endl;//4
// v.push_back(77);
v[3] = 5; // dont use this
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
// cout<<v[4]<<" ";

} 