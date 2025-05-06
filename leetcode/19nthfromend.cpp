// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
//     public:
//         ListNode* removeNthFromEnd(ListNode* head, int n) {
//             ListNode* slow =head;
//             ListNode* fast =head;
//     // traverse fast to n+ 1 steps
//     for (int i=1;i<=n+1;i++){
//         if(fast ==NULL) return head->next;
//         fast =fast->next;
//     }
//     while(fast!=NULL){
//         slow = slow->next;
//         fast = fast->next; // now slow pointer is at left of target
//     }
//     slow->next =slow->next->next;    
//     return head;
//         }
    
//     };