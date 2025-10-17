class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();

    
        long long correctsum = (long long)n * (n + 1) / 2;

        long long currentArraySum = 0;
        for (int e : arr) {
            currentArraySum += (long long)e;
        }

        set<int> s1;
        for (int e : arr) {
            s1.insert(e);
        }

        long long setsum = 0;
        for (int e : s1) {
            setsum += (long long)e;
        }

        int missing = (int)(correctsum - setsum);
        int repeated = (int)(currentArraySum - setsum);

        return {repeated, missing};
    }
};
