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
    int pairSum(ListNode* head) {

        vector<int>v1;
        ListNode*temp=head;
        while(temp){
            v1.push_back(temp->val);
            temp=temp->next;
        }
        int n=v1.size();
        int res=0;
        
        for(int i=0;i<n/2;i++){
            int sum=v1[i]+v1[n-1-i];
            res=max(res,sum);
        }
        return res;
        
    }
};