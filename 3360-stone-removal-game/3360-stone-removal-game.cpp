class Solution {
public:
    bool canAliceWin(int n) {
        bool move=0;// alice

        int count=10;
        while(n>0){
            if(n<count)return move;
            move=!move;
            n-=count;
            count--;
            
        }
        return move;

    }
};