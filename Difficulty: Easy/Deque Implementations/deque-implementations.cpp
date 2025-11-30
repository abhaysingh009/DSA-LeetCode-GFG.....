

class Solution {
  public:
    void pb(deque<int>& dq, int x) {
        // push element x to the back
        dq.push_back(x);
    }

    void ppb(deque<int>& dq) {
        // pop element from the back if not empty
        if (!dq.empty()) dq.pop_back();
    }

    int front_dq(deque<int>& dq) {
        // return front element, or -1 if empty
        return dq.empty() ? -1 : dq.front();
    }

    void pf(deque<int>& dq, int x) {
        // push element x to the front
        dq.push_front(x);
    }
};
