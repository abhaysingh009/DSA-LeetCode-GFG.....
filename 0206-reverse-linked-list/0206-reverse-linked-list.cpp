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
ListNode* helper(ListNode* curr,ListNode* prev,ListNode* fut){
    if(!curr)return prev;
    fut=curr->next;
    curr->next=prev;
    prev=curr;
    curr=fut;
     return helper(curr,prev,fut);
   



}
    ListNode* reverseList(ListNode* head) {
        ListNode* curr= head;
        ListNode* prev= NULL;
        ListNode* fut= NULL;
        return helper(curr,prev,fut);
    }
};