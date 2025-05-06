#include<iostream>
using namespace std;
class Node{ 
    public:
    int val;
    Node* next; 
    Node(int val){
        this->val=val;
        this->next=NULL;  
    }
};

class LinkedList{  
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
    
        head =tail =  NULL;
        size =0;
    }
    void insertAtTail(int val ){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
    else {
        tail->next=temp;
        tail = temp;
    }
    size ++;
    }
    void insertAtHead(int val ){
        Node* temp = new Node(val);
        if(size== 0) head = tail = temp;
    else {
        temp->next=head ;
        head = temp;
    }
    size ++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){ cout<<"invalid index"<<endl;
       }
       else if(idx==0)

        insertAtHead(val); // if index is 0, insert at head
        else if(idx==size){
            insertAtTail(val); // if index is size, insert at tail
     }
     else {
        Node* t =new Node(val);
        Node* temp = head; // 
for(int i=0;i<idx-1;i++){
            temp = temp->next; // to go to the previous node of the index
        }
        t->next = temp->next; // to insert the new node at the index
        temp->next = t; // to insert the new node at the index
size ++; 
     }
      
    }
   
    void deleteAtHead(){
        if(size==0) {
            cout<<"list is empty"<<endl;
        return;
        }
        head = head->next; // to make the next of the head as head
        size--;
    }

void deleteAtTail(){
        if(size==0) {
            cout<<"list is empty"<<endl;
        return;
        }
        Node* temp =head;
        while(temp->next!= tail){

temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
 
    void deleteAtIdx(int idx){
        if(size==0) {
            cout<<"list is empty"<<endl;
        return;
        }
     else   if(idx<0 || idx>=size) {
            cout<<"invalid index"<<endl;
        return;
        }
        else if(idx==0) deleteAtHead(); 
        else if(idx==size-1) deleteAtTail(); 
        else {
            Node* temp = head; 
            for(int i=0;i<idx-1;i++){
                temp = temp->next; // to go to the previous node of the index
            }
            temp->next = temp->next->next; // to delete the node at the index
            size--;

        }
    }

    void display(){
    Node* temp =head;
   
    while(temp!= NULL){
       
        cout<<temp->val<< " ";
        temp = temp->next;  
    }   cout << endl;
 }
 
 void getIdx(int idx){
    if(idx<0 || idx>=size ) cout<<"invalid index"<<endl;
  else if(idx ==0) cout <<head->val<<endl;
    else if(idx == size-1) cout <<tail->val<<endl;
    else {
        Node* temp = head; 
        for(int i=0;i<idx;i++){ 
            temp = temp->next;         
        }
        cout <<temp->val<<endl; 
    }

 }

};
int main(){
LinkedList ll ;

ll.insertAtTail(10); //{10}
ll.display();
ll.insertAtTail(20);//{10,20}
ll.display();
ll.insertAtTail(30);//{10,20,30}
ll.display();
ll.insertAtTail(40);//{10,20,30,40}
ll.display();
ll.insertAtTail(50);//{10,20,30,40,50}
ll.display();

ll.insertAtHead(2);//{2,10,20,30,40,50}

ll.display();
ll.insertAtIdx(2, 33);//{2,10,33,20,30,40,50}
ll.display();
ll.getIdx(2);//33

ll.deleteAtHead();//{10,33,20,30,40,50}
ll.display();
ll.deleteAtTail();//{10,33,20,30,40}
ll.display();
ll.deleteAtIdx(2);//{10,33,30,40}
ll.display(); 

}