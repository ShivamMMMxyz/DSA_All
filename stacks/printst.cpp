#include<iostream>
#include<stack>

using namespace std;
int main(){ 




stack<int> s; // stack of integers
s.push(1); // push 1 in stack
s.push(2); // push 2 in stack
s.push(3); // push 3 in stack
s.push(4); // push 4 in stack
s.push(5); // push 5 in stack
s.push(6); // push 6 in stack
// s.pop(); // pop 6 from stack
cout<<s.size()<<endl; // returns size of stack
while(s.size()>0){ // while stack is not empty
    cout<<s.top()<<" "; // print top element of stack
    s.pop(); // pop top element from stack

}
}