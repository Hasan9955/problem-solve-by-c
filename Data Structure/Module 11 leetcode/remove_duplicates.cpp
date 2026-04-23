
// class Solution {
// public:

//     ListNode* deleteDuplicates(ListNode* head) {
        
//         unordered_set<int>seen;

//         ListNode *curr = head;
//         ListNode *prev = NULL;

//         while (curr != NULL){

//             if(seen.count(curr->val)){
//                 prev->next = curr->next;
//                 delete curr;
//                 curr = prev->next;
//             } else {
//                 seen.insert(curr->val);
//                 prev = curr;
//                 curr = curr->next;
//             }
//         }

//         return head;

//     }
// };