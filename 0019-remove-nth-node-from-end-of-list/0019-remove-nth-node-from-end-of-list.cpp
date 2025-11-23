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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){return head;}
        
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }

        if (n == count) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        count=count-n-1;
        temp=head;
        while(count--){
            temp=temp->next;


        }
        
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;

        return head;
        
    }
};