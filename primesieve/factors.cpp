#include<iostream>
#include<cmath>
using namespace std;


bool isprime(int n){
if(n==1) return false;
  for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
return true;
}

int main(){


int n;
int i=0;
cout<<"prime till : ";
cin>>n;
int count  =0;


for(int i=1;i<=sqrt(n);i++){
    if(n%i==0) 
    {
      cout<<i<<"  ";
      if(i!=sqrt(n)) cout<<n/i<<" ";
    }
}

    return 0;
}