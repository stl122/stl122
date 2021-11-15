/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int min = INT_MIN;
        
        while(head != NULL){
            if(head->val == min)
                return true;
            
            head->val = min;
            head = head->next;
        }
        
        return false;
    }
};
