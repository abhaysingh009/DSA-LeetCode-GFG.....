class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalPos;
        
        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 2;  
        
        while (curr->next != nullptr) {
            if ((curr->val > prev->val and curr->val > curr->next->val) o
                (curr->val < prev->val and curr->val < curr->next->val)) {
                criticalPos.push_back(index);
            }
            prev = curr;
            curr = curr->next;
            index++;
        }
        
        if (criticalPos.size() < 2)
            return {-1, -1};
        
        int minDist = INT_MAX;
        for (int i = 1; i < criticalPos.size(); i++) {
            minDist = min(minDist, criticalPos[i] - criticalPos[i - 1]);
        }
        
        int maxDist = criticalPos.back() - criticalPos.front();
        
        return {minDist, maxDist};
    }
};
