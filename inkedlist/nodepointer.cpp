#include<iostream>
using namespace std;
class Node{  // linked list node
    public:
    int val;
    Node* next; // val and next are two adjacent spaces
    Node(int val){// parameterized constructor
        this->val=val;
        this->next=NULL;  // to store null value on adjacent to a,b,c,d
    }
};

void display(Node* head){ // this fn will print whole linked list by just head i.e by a only
    Node* temp = head; // tc =O(n)  ,sc=O(1)
while(temp!=NULL){
    cout<<temp->val<<" ";
    temp = temp->next; 
}
}
// to show recursively
void displayrec(Node* head){  // in recursive meth od tc= sc = O(n)
   if(head == NULL) 
       return;
   cout << head->val << " ";
   displayrec(head->next);
}
// display tail to head means in reverse order
void displayreverse(Node* head){ 
   if(head == NULL) 
       return;
  
   displayreverse(head->next);
   cout << head->val << " ";
}
void insertAtEnd(Node* head, int val ){
    Node* temp = new Node(val); // to create a new node
  while(head->next!=NULL){ // to find the last node
        head = head->next; // to go to the next node
    }
    head->next = temp; // to insert the new node at the end of the linked list
    temp->next = NULL; // to insert null value at the end of the linked list
}



int main(){
    Node* a =new Node(10); // holds the address of a and its next i.e. null address  
    Node* b =new Node(20);
    Node* c =new Node(30); // to print c cout
    Node* d =new Node(40);
    Node* e =new Node(50);
    a->next =b;
    b->next =c; 
    c->next =d;
    d->next =e;
   
   cout<<(*a).val<<endl; // to print a 
    cout<<a->val<<endl; // value of a
// cout<<a->next->next->val<<endl; // c ki value
// cout<<a->next->next->next->val; // d ki value

// Node* temp = a;  // same as int *ptr=a
// while(temp!=NULL){
//     cout<<temp->val<<" ";  // (*temp).value = temp->value =value at adrss temp
//     temp = temp->next;  
// }
// display(a);

// displayrec(a);
int n= 0;
Node* temp = a; // it stores the address of a and its next i.e. null address
while(temp!=NULL){
      
    temp = temp->next; 
    n++;
}
// cout<<"no of elements = "<<n<<endl;
displayreverse(a);

insertAtEnd(a, 60); // to insert 60 at the end of the linked list
cout<<endl;
cout<<"after inserting 60 at the end of the linked list"<<endl;
display(a);
}