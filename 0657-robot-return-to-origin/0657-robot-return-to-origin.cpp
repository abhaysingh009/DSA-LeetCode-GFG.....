class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int>v(26,0);

        for(int i=0;i<moves.size();i++){
            v[moves[i]-'A']++;
        }
        if(!(v['D'-'A']==v['U'-'A'])||!(v['L'-'A']==v['R'-'A']))return false;
        return true;
    }
};