#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){

    cout<<"elements : ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}
    void reversePart(int i, int j,vector<int> &a){
while (i<=j)
{
  int temp = a[i];
  a[i] = a[j];  
    a[j] = temp;
    i++;
    j--;
}

    }

int main(){

vector<int> a;
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
a.push_back(6);
display(a);
reversePart(1,4,a);
display(a);


}