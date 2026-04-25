// class Solution {
// public:

//     int size(ListNode *head){
//         int count = 0;
//         ListNode *temp = head;
//         while(temp){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }

//     ListNode* swapNodes(ListNode* head, int k) {
        
//         int sz = size(head);
//         int revInd = sz - k + 1;

//         ListNode *startNode = NULL;
//         ListNode *endNode = NULL;

//         ListNode *temp = head;
        
//         for(int i = 1; temp != NULL; i++){
 
//             if(i == k){ 
//                 startNode = temp;
//             }
//             if (i == revInd){
//                 endNode = temp;
//             }

//             temp = temp->next;
//         }

//         // swap values
//         if(startNode && endNode){
//             swap(startNode->val, endNode->val);
//         }

//         return head;
//     }
// };