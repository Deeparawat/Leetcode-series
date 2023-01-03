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
    
    
     int getLength(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
   
        
        
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        if(head==NULL)
            return NULL;
        //reverse the first k node
        
       ListNode* curr=head;
       ListNode* next=NULL;
       ListNode* prev=NULL;
       int count=0;
        
      //Calculate the length of node & check with k
        int length=getLength(head);
        if(k>length) return head;
        
        
      while(curr!=NULL && count<k){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
           count++;
      
   
      }
        //recursion dekh lega aage ka
        
        if(next!=NULL){
            
            head->next= reverseKGroup(next,k);
       
        }
        
        //returning head of reverse linked list
        
        return prev;
    }
};