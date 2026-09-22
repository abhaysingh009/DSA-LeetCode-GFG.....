class Solution { 
public: 
    ListNode* swapPairs(ListNode* head) { 
        if(!head or!head->next) return head; 
   
        ListNode* p1=head; 
        ListNode* p2=head->next; 
        ListNode* res=p2; 
        ListNode* prev=nullptr;
   
        while(p2 and p1) { 
            ListNode* temp=p2->next; 
   
            p2->next=p1; 
            p1->next=temp; 
            if(prev)prev->next=p2;
            prev=p1;
            p1=temp; 
   
            if(!p1 or !p1->next) break; 
   
            p2=p1->next; 
        } 
   
        return res; 
    } 
};