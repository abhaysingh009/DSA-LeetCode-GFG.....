/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        int count=0;
        while(head){
            if(head->data==key)count++;
            head=head->next;
            
        }
        return count;
    }
};