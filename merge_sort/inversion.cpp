
// two elements of arr a,a[i] and a[j] form an inversion
// if a[i]>a[j] and i <j. given an arr of integers find the inversion count


#include<iostream>
#include<vector>
using namespace std;
int main(){
int count =0;

int a[] ={5,3,2,1,6,7};
int n = sizeof(a)/sizeof(a[0]);
vector<int> v(a,a+n);
for(int i=0; i < n; i++){
cout<<v[i]<<" ";
}
cout<<endl;


for(int i=0; i < n; i++){
    for(int j=1+i;j<n;j++){   
    if(v[i]>v[j]){   // tc o(n2)
        count++;
    }
    }
  
}
cout<<count;
    return 0;
}