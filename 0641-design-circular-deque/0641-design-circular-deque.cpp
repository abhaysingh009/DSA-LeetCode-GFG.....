class MyCircularDeque {
public:
    int *arr;
    int size;
    int front;
    int rear;
    MyCircularDeque(int k) {
        arr=new int[k];
        front=rear=-1;
        size=k;
        
    }
    
    bool insertFront(int value) {
        //if empty
        if(isEmpty()){
            rear++;
            front++;
            arr[front]=value;
            return true;
        }
        //if full
        if(isFull()){
            return false;
        }
        //if not full
        front=(front-1+size)%size;
        arr[front]=value;
        return true;

        
    }
    
    bool insertLast(int value) {
        //if empty
         if(isEmpty()){
            rear++;
            front++;
            arr[rear]=value;
            return true;
        }
        //if full
        if(isFull()){
            return false;
        }
        //if already exist
        rear=(rear+1)%size;
         arr[rear]=value;
        return true;
        
    }
    
    bool deleteFront() {
        //if empty
        if(isEmpty()){
            return false;
        }
        //if only one elem present 
        if (front==rear){
            front=rear=-1;
            return true;
        }
        //if more than one elem present
        front=(front+1)%size;
        return true;

    }
    
    bool deleteLast() {
        //if empty
         if(isEmpty()){
            return false;
        }
        //if only one elem present 
        if (front==rear){
            front=rear=-1;
            return true;
        }
        //if more than one elem present
        rear=(rear-1+size)%size;
        return true;
        
    }
    
    int getFront() {
         if(isEmpty()){
            return -1;
        }
        return arr[front];

        
    }
    
    int getRear() {
         if(isEmpty()){
            return -1;
        }
        return arr[rear];
        
    }
    
    bool isEmpty() {
        return front==-1;
        
    }
    
    bool isFull() {
        return (rear+1)%size==front;
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */