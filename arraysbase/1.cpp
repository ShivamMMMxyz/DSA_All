#include<iostream>
using namespace std;

int main (){
    
    
    int arr[]={1,4,6,7,9};
    int max =arr[0];
   
    cout << "The elements of the array are: ";
    for (int i = 0; i < 5; i++) {
        if(arr[i]>max){
            max =arr[i];
            
        }
       
        
    }
    cout << max<< " ";
    return 0;
}