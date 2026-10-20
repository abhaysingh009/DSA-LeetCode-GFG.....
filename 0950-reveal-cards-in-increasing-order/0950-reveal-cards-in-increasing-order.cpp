class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        vector<int>arr(n,0);

        int j=0;
        bool skip=0;
        for(int i=0;i<n;i=(i+1)%n){
            if(j==n)break;
            if(arr[i]!=0)continue;
            if(skip){
               skip=0; 
            }else {
                arr[i]=deck[j++];
                skip=1;
            }

        }
        return arr;



    }
};