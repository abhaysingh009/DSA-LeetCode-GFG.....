/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* list1, Node* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        Node* head=new Node(-1);
        Node* temp=head;
        while(list1!=nullptr and list2!=nullptr){
            if(list1->data<list2->data){
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
                temp=temp->next;
        }
        while(list1!=nullptr){
            temp->next=list1;
            list1=list1->next;
             temp=temp->next;

        }
        while(list2!=nullptr){
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;

        }
        Node* curr=head;
        head=head->next;
        delete curr;
        return head;
        
        
    }
};