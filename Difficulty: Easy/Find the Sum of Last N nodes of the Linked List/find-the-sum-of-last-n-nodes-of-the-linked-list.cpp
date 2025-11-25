class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        Node*temp=head;

        int count=0;
        while(temp){
            
            count++;
            temp=temp->next;
        }
        int sum=0;
        temp=head;
        while(temp){
            count--;
            
            if(count<n){
                sum+=temp->data;
            }
            temp=temp->next;
        }
        return sum;
  
    }
};