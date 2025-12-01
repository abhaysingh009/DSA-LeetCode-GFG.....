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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        vector<int>arr(n);
        temp=head;
        for(int i=n-1;i>=0;i--){
            arr[i]=temp->val;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<n;i++){
            if(arr[i]!=temp->val){
                return false;
            }
            temp=temp->next;
        }
        return true;
        
    }
};