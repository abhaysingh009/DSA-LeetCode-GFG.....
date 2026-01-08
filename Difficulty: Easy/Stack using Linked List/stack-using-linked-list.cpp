/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
  public:
    int sizeSt;
    Node*head;
    myStack() {
        sizeSt=0;
        head=nullptr;
    }

    bool isEmpty() {
        return sizeSt==0;
        
    }

    void push(int x) {
        if(!head){
            head=new Node(x);
           sizeSt++;
            return;
            
        }
        sizeSt++;
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
    }

    void pop() {
        if(isEmpty())return;
        Node*temp=head;
        head=head->next;
        delete temp;
        sizeSt--;
    }

    int peek() {
        if(isEmpty())return -1;
        return head->data;
        
    }

    int size() {
        return sizeSt;
        
    }
};