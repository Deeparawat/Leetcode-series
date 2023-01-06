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
    ListNode* reverseList( ListNode* head , ListNode * rightnext) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * forward = NULL;
        
        while(curr != rightnext){
            forward=curr -> next;
            curr -> next =prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head==NULL || head->next ==NULL){
            return head;
        }
        int count =1;
        ListNode* prev = NULL;
        ListNode* leftNode = head;
        while(count!=left && leftNode->next !=NULL){
            prev = leftNode;
            leftNode = leftNode->next;
            count++;
        }
        ListNode* rightNode = leftNode;
        while(count!=right && rightNode->next!=NULL){
            rightNode =rightNode->next;
            count++;
        }
       
        ListNode* rightnext = rightNode->next;
        ListNode* newhead = reverseList(leftNode , rightnext);
        if(prev!=NULL){
        prev->next =newhead;
        leftNode->next = rightnext;
            return head;
        }
        leftNode->next = rightnext;
        return newhead;
    }
};