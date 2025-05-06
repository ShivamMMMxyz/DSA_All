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
int n,k;
cin>>n>>k; // n = size of array, k = no of elements to be rotated
k=k%n;

vector<int> a;
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
a.push_back(6);
display(a);
reversePart(0,n-k-1,a);
reversePart(n-k,n-1,a);
reversePart(0,n-1,a); // reverse whole array
display(a);


}