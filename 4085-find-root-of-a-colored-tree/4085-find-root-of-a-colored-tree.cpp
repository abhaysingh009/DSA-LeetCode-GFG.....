// not able to solve in the contest
class Solution {
public:
    int findColoredRoot(vector<vector<int>>& arr, string color) {
        
        map<char,char>mp={
            {'R','B'},
            {'B','W'},
            {'W','R'}
        };
        int n=arr.size();
        int m=color.size();

        vector<int>indeg(m,0);
        vector<int>outdeg(m,0);
        for(int i=0;i<n;i++){
            if(mp[color[arr[i][0]]]==color[arr[i][1]]){
                indeg[arr[i][1]]++;
                outdeg[arr[i][0]]++;
            }else if( mp[color[arr[i][1]]]==color[arr[i][0]] ){
                indeg[arr[i][0]]++;
                outdeg[arr[i][1]]++;
            }else {
                return -1;
            }
        }
        int root=-1;
        for(int i=0;i<m;i++){
            if(indeg[i]==0){
                if(root==-1){
                    root=i;
                }else{
                    return -1;
                }
            }
        }
        // if(root==-1)return root;
        if(outdeg[root]>2)return -1;
        return root;
    }
};