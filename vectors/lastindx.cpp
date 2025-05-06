#include<iostream>
#include<vector>
using namespace std;
int main(){
   
vector<int> v;
v.push_back(3);
v.push_back(334);
v.push_back(3);
v.push_back(34);
v.push_back(23);
v.push_back(13);
v.push_back(93);
int x = 3; // tp find last index of 3

int indx = -1;
// for(int i=0;i<v.size();i++){
//     if(v[i]==x) indx =i;
// }
//  cout<<indx;

// using reverse order
for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){
     indx =i;
     break;
    }
}
cout<<indx;

}