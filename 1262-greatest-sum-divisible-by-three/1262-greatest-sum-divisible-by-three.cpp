class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>remainder1;
        vector<int>remainder2;
        int sum=0;
        for(int i:nums){
            if(i%3==1)remainder1.push_back(i);
            else if(i%3==2)remainder2.push_back(i);
            sum+=i;
        }
        sort(remainder1.begin(),remainder1.end());
        sort(remainder2.begin(),remainder2.end());
        int rem=sum%3;
        if(rem==0)return sum;
        int res=0;
        if(rem==1){
            int remove1=remainder1.size()>0?remainder1[0]:INT_MAX;
            int remove2=remainder2.size()>1?remainder2[0]+remainder2[1]:INT_MAX;

            res=max(res,sum-min(remove1,remove2));
        }else{
            int remove1=remainder1.size()>1?remainder1[0]+remainder1[1]:INT_MAX;
            int remove2=remainder2.size()>0?remainder2[0]:INT_MAX;
            res=max(res,sum-min(remove1,remove2));
        }
        return res;
    }
};