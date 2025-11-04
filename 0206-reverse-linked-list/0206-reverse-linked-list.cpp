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
    ListNode* reverseList(ListNode* head) {
        vector<int>temp;
        ListNode*it=head;
        while(it){
            temp.push_back(it->val);
            it=it->next;
        }
        it=head;
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            it->val=temp[i];
            it=it->next;
        }
        return head;
        
    }
};