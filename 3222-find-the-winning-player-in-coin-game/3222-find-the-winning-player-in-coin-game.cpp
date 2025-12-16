class Solution {
public:
    string winningPlayer(int x, int y) {
        int noOfTurns=min(x,y/4);
        return (noOfTurns%2==0)?"Bob":"Alice";
        
    }
};