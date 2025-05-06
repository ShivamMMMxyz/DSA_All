#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
   
vector<int> v;



v.push_back(4);
v.push_back(43);
v.push_back(99) ;
v.push_back(0);
v.push_back(99);

v.push_back(4);

v.at(3) = 90;
// cout<<v.at(3);

for (int i = 0; i <v.size(); i++)
{
    cout<<v.at(i)<<" ";
}
cout<<endl;

sort(v.begin(),v.end());

for (int i = 0; i <v.size(); i++)
{
    cout<<v.at(i)<<" ";
}



}