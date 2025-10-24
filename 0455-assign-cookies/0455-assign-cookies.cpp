class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int n=g.size();
        int n2=s.size();
        int i=0;
        int j=0;
        int count=0;
        while(i<n and j<n2){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;

            }
            else{
                j++;
            }

        }
        return count;
        
    }
};