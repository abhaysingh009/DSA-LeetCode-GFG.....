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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>v;
        ListNode* temp;

        for (auto head : lists) {
            temp=head;
            while (temp) {
                v.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* head=nullptr;
        for(int i=0;i<v.size();i++){
        if(head==nullptr){
            head=new ListNode(v[i]);
        }
        else{
            temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            ListNode* curr=new ListNode(v[i]);
            temp->next=curr;
        }
        }
        return head;
        
    }
};