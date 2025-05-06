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
void display(Node* head){
    Node* temp =head;
   
    while(temp!= NULL){
       
        cout<<temp->val<< " ";
        temp = temp->next;  
    }   cout << endl;
 } 
Node* deleteNode(Node* head,Node* target){
    if(head ==target){
        head =head->next;
        return head; // if the target node is the head node then return the next node of the head node

    }
Node* temp = head;
while(temp->next!=target){
    temp = temp->next; // to go to the previous node of the target node    
}
temp->next =temp->next->next; // to skip the target node and point to the next node of the target node
return head; // return the head of the linked list
}
Node* deleteNodeval(Node* head,int targetval){
    if(head->val ==targetval){
        head =head->next;
        return head; // if the target node is the head node then return the next node of the head node

    }
Node* temp = head;
while(temp->next->val!=targetval){
    temp = temp->next; // to go to the previous node of the target node    
}
temp->next =temp->next->next; // to skip the target node and point to the next node of the target node
return head; // return the head of the linked list
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
Node* head =a;


display(a);  
head= deleteNode(head,c); // to delete the node c
display(head); // 10 20 40 50

head= deleteNodeval(head,20); // to delete the node with value 20
display(head); // 10 40 50


     
}