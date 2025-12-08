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
    ListNode* removeElements(ListNode* head, int k) {
        ListNode* temp1=head;
        ListNode*res=NULL;
        while(temp1){
            int x=temp1->val;
            temp1=temp1->next;
            if(x!=k){
                
            
     
      if(res==NULL){
        res=new ListNode(x);
      } 
      else{
        ListNode* temp=res;
        while(temp->next){
            temp=temp->next;
        }
        ListNode* curr=new ListNode(x);
        temp->next=curr;
      } 
            }
        }
        return res;
    }
};