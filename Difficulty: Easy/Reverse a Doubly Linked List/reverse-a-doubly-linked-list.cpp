/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        Node*temp1=head;
        Node*temp2=head;
        int n=0;
        while(temp1->next!=NULL){
            temp1=temp1->next;
            n++;
        }
        n/=2;
        
        while(n>=0){
            swap(temp2->data,temp1->data);
            temp2=temp2->next;
            temp1=temp1->prev;
            n--;
        }
        return head;
        
    }
};