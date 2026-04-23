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
// public:

//     int size(ListNode * head){
//         int count = 0;
//         ListNode * temp = head;
//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }

//         return count;
//     }

//     ListNode* removeNthFromEnd(ListNode*&head, int n) {
        
//         int sz = size(head);

//         int remIndex = sz - n;
        
//         if(remIndex == 0){
//             ListNode *deleteNode = head;
//             head = head->next;
//             delete deleteNode;
//             return head;
//         }

//         ListNode *temp = head;
        
//         for(int i = 1; i < remIndex; i++){
//             temp = temp->next;
//         }

//         ListNode *deleteNode = temp->next;
        
//         temp->next = deleteNode->next;
  
//         delete deleteNode;

//         return head;
//     }
// };