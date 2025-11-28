class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
        int index=0;
        while(index<startTime.size()){
            if(startTime[index]<=queryTime && endTime[index]>=queryTime){
                count++; index++;
            }
            else index++;
        }
        return count;
    }
};