class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
  Node * front;
  Node *rear;
  int getsize=0;
    myQueue() {
        front=nullptr;
        rear=nullptr;
        getsize=0;
    }

    bool isEmpty() {
        return front==nullptr;
    }

    void enqueue(int x) {
        if(front==nullptr){
            front=new Node(x);
            rear=front;
            getsize=1;
            return ;
        }
        Node* temp=new Node(x);
        getsize++;
        rear->next=temp;
        rear=rear->next;
        
    }

    void dequeue() {
        if(isEmpty())return;
        getsize--;
        Node* temp=front;
        front=front->next;
        delete temp;
    }

    int getFront() {
        if(isEmpty())return -1;
        return front->data;
    }

    int size() {
        return getsize;
        
    }
};
