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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr = head;
        int size = 1;
        
        while(ptr->next != NULL){
            size++;
            ptr = ptr->next;
        }
        
        int numbers[size];
        
        for(int i = 0; i < size; i++){
            numbers[i] = head->val;
            head = head->next;
        }
        
        for(int i = 0; i < size/2 + 1; i++){
            if(numbers[i] == numbers[size - i - 1])
                continue;
            else
                return false;
        }
        
        return true;
    }
};
