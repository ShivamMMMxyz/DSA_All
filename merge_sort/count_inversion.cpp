
// two elements of arr a,a[i] and a[j] form an inversion
// if a[i]>a[j] and i <j. given an arr of integers find the inversion count


#include<iostream>
#include<vector>
using namespace std;
int main(){
int count =0;

int a[] ={5,3,2,1,6,7};
int n = sizeof(a)/sizeof(a[0]);
for(int i=0; i < n; i++){
for(int j=1+i;j<n;j++){   // tc n2

// if( a[i]>a[j] && i<j )
if(a[i]>a[j])
{
    count++;
}
      
}

    
}

cout<<count;




    return 0;
}