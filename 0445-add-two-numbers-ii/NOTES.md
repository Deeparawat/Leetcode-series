};
​
​
​
class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
ListNode* dummy=new ListNode();
ListNode*temp=dummy;
int carry=0;
while(l11!=NULL || l22!=NULL|| carry){
int sum=0;
if(l11!=NULL){
sum+=l11->val;
l11=l11->next;
}
if(l22!=NULL){
sum+=l22->val;
l22=l22->next;
}
sum+=carry;
carry=sum/10;
ListNode*node=new ListNode(sum%10);
temp->next=node;
temp=temp->next;
}
return dummy->next;
}
};