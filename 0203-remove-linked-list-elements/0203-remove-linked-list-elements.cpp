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

/*class Solution {
public:
    ListNode* removeElements(ListNode* head, int value) {
        
        
        while(head != NULL && head->val == value){
            head = head->next;
        }
        if(head == NULL)
            return head;
        
        head->next = removeElements(head->next,value);
        return head;
    }
};
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head && head->val == val) head = head->next;
        
        ListNode* cur = head;
        
        
        while(cur){
            
           
            if(cur->next && cur->next->val == val)
                cur->next = cur->next->next;
            else cur = cur->next;
            
        }
        
        
        return head;
    }
};