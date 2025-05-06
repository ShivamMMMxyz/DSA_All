#include<iostream>

using namespace std;

class Vector{
    public:
    int size;
    int capacity;
    int *arr;

    Vector(){
size=0;
capacity=1;
arr=new int[1]; // dynamic memory allocation
    }
    void add (int ele){

if(size==capacity){ 
capacity*=2; // double the capacity
int *arr2=new int[capacity]; // create a new array with double the capacity
for(int i=0;i<size;i++){
arr2[i]=arr[i]; // copy the elements from old array to new array
}
arr=arr2; // assign the new array to the old array
}

arr[size++]=ele; // add the element to the array

    }
void print(){
for(int i=0;i<size;i++){    
cout<<arr[i]<<" "; // print the elements of the array
}
cout<<endl;
}
int get(int index){
  if(size==0){
    cout<<"Array is empty"<<endl;
    return -1;
  }
  if(index<0 || index>=size){
    cout<<"Index out of bounds"<<endl;
    return -1;
  }
}
void remove(){
    if(size==0){
        cout<<"Array is empty"<<endl;
    }
    else{
        size--;
    }

}
    
}; 

int main(){
// int* arr = new int[5]; // dynamic memory allocation

Vector v; // default constructor is called when the object is created. It initializes the data members of the class to default values.

cout<<v.size<<v.capacity<<endl; // 0 1
v.add(1); 
v.print();
v.add(2);
v.print();
cout<<v.size<<v.capacity<<endl;
v.add(3);
v.print();

cout<<"at index is"<<v.get(2)<<endl; // 2

v.remove();
v.print(); // 1 2                       



}