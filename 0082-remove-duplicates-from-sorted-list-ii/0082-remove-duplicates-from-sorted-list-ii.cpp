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
    
    /*
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=new ListNode(0,head);//dummy node
        ListNode* prev=temp;
        
        while(head!=NULL){
            if(head->next!=NULL && head->val==head->next->val){
               while(head->next!=NULL && head->val==head->next->val){
                   head=head->next;
               }
                prev->next=head->next;
            }else{
                prev=prev->next;
            }
            head=head->next;
        }
        return temp->next;
    }
};



ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(curr != NULL && curr->next != NULL) {
        if(curr->val == curr->next->val) {
            while(curr->next != NULL && curr->val == curr->next->val) {
                curr = curr->next;
            }
            if(prev != NULL) {
                prev->next = curr->next;
                curr = curr->next;    
            }else {
                head = curr->next;
                curr = curr->next;   
            }
        }else {
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

*/

ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mp {};
        while(head != NULL) {
            mp[head->val] ++;
            head = head->next;
        }
        ListNode *sol = new ListNode;
        ListNode *p = sol;
        for(auto it = mp.begin(); it != mp.end(); it ++)
            if(it->second == 1) {
                p->next = new ListNode(it->first);
                p = p->next;
            }
        return sol->next;
    }



};