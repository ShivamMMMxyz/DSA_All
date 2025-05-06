#include<iostream>
using namespace std;
int main(){

int arr[]={6,3,1,2,4,9,8,5,7,8,10};
int n = sizeof(arr)/sizeof(arr[0]);
int sum = (n-1)*(n)/2;

int arrsum =0;
for(int i=0;i<n;i++){
    arrsum += arr[i];
}
// cout<<arrsum;
int target= arrsum-sum;
cout<<"the repeated element is "<<target;

return 0;
}