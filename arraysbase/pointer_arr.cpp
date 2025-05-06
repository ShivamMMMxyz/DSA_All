#include<iostream>
using namespace std;



int main(){
int arr[] ={3,4,2,5,3,9};
int* ptr = arr; // saves the address of arr[0] in ptr
cout<<ptr<<endl;
cout<<&arr[0]<<endl; // both r same gives the address
 
// cout<<ptr[0];
// ptr[0] = 8; // using pointer we can update the value also
// for(int i=0;i<=5;i++){
//     cout<<ptr[i]; // this prints whole arr thus ptr have access to whole arr
// }
// i[ptr] = i[arr] = arr[i]

for(int i=0;i<=5;i++){
cout<<*ptr;
ptr++;

}
cout<<endl;

ptr++;  // points to 2nd element
  *ptr = 9;// ptr[0] =9
  ptr--; 

  for(int i=0;i<=5;i++){
    cout<<*ptr<<" ";
    ptr++;

  }
return 0;
}