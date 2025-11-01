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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s1(nums.begin(), nums.end());

        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* temp = dummy;
        while (temp->next != nullptr) {
            if (s1.count(temp->next->val)) {
                temp->next = temp->next->next;
            } 
            else {
                temp = temp->next;
            }
        }
        return dummy->next;
        
    }
};
