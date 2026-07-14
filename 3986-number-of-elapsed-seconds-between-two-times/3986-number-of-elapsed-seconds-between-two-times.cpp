class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
      int startSecond=0;
      int endSecond=0;
      //hours
      startSecond+=(stoi(startTime.substr(0,2))*3600);
      endSecond+=(stoi(endTime.substr(0,2))*3600);
      //minutes
      startSecond+=(stoi(startTime.substr(3,2))*60);
      endSecond+=(stoi(endTime.substr(3,2))*60);
      //seconds
      startSecond+=(stoi(startTime.substr(6,2)));
      endSecond+=(stoi(endTime.substr(6,2)));


      return endSecond-startSecond; 
    }
};