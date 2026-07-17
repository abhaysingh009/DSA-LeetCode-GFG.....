class SmallestInfiniteSet {
public:
set<int>st;
set <int>popped;
int smallest=1;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            st.insert(i);
        }
    }
    
    int popSmallest() {
        while(!st.count(smallest)){
            smallest++;
        }
        st.erase(smallest);
        popped.insert(smallest);
        smallest++;
        return smallest-1;
    }
    
    void addBack(int num) {
      if(popped.count(num)){
        smallest=min(smallest,num);
        st.insert(num);
        popped.erase(num);
      }  
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */