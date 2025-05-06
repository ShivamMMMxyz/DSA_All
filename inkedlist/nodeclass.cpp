#include<iostream>
using namespace std;
class Node{  // linked list node
    public:
    int val;
    Node* next; // val and next are two adjacent spaces
    Node(int val){
        this->val=val;
        this->next=NULL;  // to store null value on adjacent to a,b,c,d
    }
};

int main(){
//   Node a;
//   a.val =10;
//   Node b;
//   b.val= 20;
//   Node c;
//   c.val =30;
//   Node d;

// using constructor
Node a(10); // this assign a 10
Node b(20);
Node c(30);
Node d(40); 

// a.next=NULL;
// b.next=NULL;
// c.next=NULL;
// d.next=NULL;  this->next =null aletnernative way
cout<<&a<<endl;


//   d.val =40; 
  a.next =&b;// THIS assigns the adjacent box address of b
  b.next =&c;
  c.next=&d;
  d.next=NULL;

//   Node* ptr =&b;

  
//   cout<<(*ptr).val<<endl;// to print b without using b
cout<<(*(a.next)).val<<endl; // because a. next is a pointer an it has address of b
  cout<<(a.next)->val<<endl; //same as above
//   *ptr =60 ;// we can change value of b also with the help of pointer
//   ptr->val=60; //same same 
  
//   cout<<b.val;


  //(a.next) is the address of b
// (a.next)->val is the value of b
//(a.next)->next  is the address of c
//((a.next)->next)->value is the value of c 
cout<<"c "<<((a.next)->next)->val<<endl; // c ki value 

cout<<"d "<<(((a.next)->next)->next)->val<<endl;// d ki value

//a.next = address of b
// *(a.next) = value of b
// *(a.next).next = address of c =b.next
// *(*(a.next).next) = value of c
// *(*(a.next).next).next = address of d
// *(*(*(a.next).next).next) = value of d
cout<<(*((a.next)->next)->next).val<<endl;
cout<<"dd"<<(((a.next)->next)->next)->val<<endl;
 
// printing all values 
cout<<"value by loop";
Node temp = a;
// while ((temp.next!=NULL)) // it will not print d's val
// { cout<<temp.val<<endl;
// temp=*(temp.next);
    
// }

while(1)
{ cout<<temp.val<<endl;
    if(temp.next==NULL) break;
    temp=*(temp.next);
        
    }

}