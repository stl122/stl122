/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        ListNode* rem = head;
        
        int size = 1;
        
        while(ptr->next != NULL){
            size++;
            ptr = ptr->next;
        }
        
        if(size == 1 && n == 1)
            return NULL;
          
        if(n == size){
            for(int i = 0; i < size-n+1; i++){
                rem->val = rem->next->val;
                rem->next = rem->next->next;
            }
        }
        
        for(int i = 0; i < size-n-1; i++)
            rem = rem->next;
        
        if(n < size && n > 1){
            rem = rem->next;
            rem->val = rem->next->val;
            rem->next = rem->next->next;
        }
                
        if(n == 1){
            rem->next = NULL;
        }
        
        return head;
    }
};
