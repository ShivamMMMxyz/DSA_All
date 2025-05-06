#include<iostream>
#include<vector>
using namespace std;
int main(){

vector <int> v={2,3,4,5,6,78,9};

vector <int> v2(v.size());


for (int i = 0; i < v.size(); i++){

    v2[i]=v[v.size()-1-i];

}
for (int i = 0; i < v2.size(); i++)
{
    cout<<v2[i]<<"  ";
}





}