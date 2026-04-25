
// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
        
//         ListNode *temp = head->next;

//         ListNode *newNodeHead = NULL;
//         ListNode *newNodeTail = NULL;



//         int sum = 0;

//         while(temp){
            
//             if(temp->val != 0){
//                 sum += temp->val;
//             } 
//             else if(temp->val == 0){
//                 ListNode *newNode = new ListNode(sum);
//                 sum = 0;
//                 if(newNodeHead == NULL){
//                     newNodeHead = newNode;
//                     newNodeTail = newNode;
//                 } else {
//                     newNodeTail->next = newNode;
//                     newNodeTail = newNode;
//                 }
//             }

//             temp = temp->next;
//         }

//         return newNodeHead;
//     }
// };







// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
        
//         ListNode* curr = head;
//         ListNode* temp = head->next;

//         int sum = 0;

//         while(temp != NULL){
            
//             if(temp->val != 0){
//                 sum += temp->val;
//             } 
//             else {
//                 curr->val = sum;
//                 sum = 0;

//                 if(temp->next == NULL){
//                     curr->next = NULL;
//                     break;
//                 }

//                 curr->next = temp;
//                 curr = curr->next;
//             }

//             temp = temp->next;
//         }

//         return head;
//     }
// };