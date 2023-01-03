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
    //  step 1 If the node is already present in map then we just simply return true that is cycle is present in the linked list.
//step 2 or else we will add value corresponding to that node in map.

    // by using map
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        unordered_map<ListNode*,int> map;
        
        ListNode* temp = head;
        
        while(temp != NULL){
            if(map[temp]){
                return true;
            }
            map[temp]++;
            temp = temp->next;
        }
        return false;
    }
};
        
  