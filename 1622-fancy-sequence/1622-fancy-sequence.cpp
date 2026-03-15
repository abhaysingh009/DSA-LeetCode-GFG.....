class Fancy {
public:
vector<long long>arr;
    Fancy() {
        
    }
    
    void append(int val) {
        arr.push_back(val);
        
    }
    
    void addAll(int inc) {
        if(arr.size()==0) {
            arr.push_back(-inc);
            return;
        }
    
        for(int i=0;i<arr.size();i++){
            arr[i]+=inc;
        }
        
    }
    
    void multAll(int m) {
        for(int i=0;i<arr.size();i++){

            int x=(int)(1e9+7);
            arr[i]=(arr[i]*m)%x;
        }
        
    }
    
    int getIndex(int idx) {
        if(idx>=arr.size())return -1;
        return arr[idx];
        
    }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */