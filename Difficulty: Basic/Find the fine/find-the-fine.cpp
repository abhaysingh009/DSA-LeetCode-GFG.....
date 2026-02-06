class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        long long int total = 0;

        for(int i = 0; i < car.size(); i++) {
            if(date % 2 == 0) {          // Even date
                if(car[i] % 2 == 1)      // Odd car
                    total += fine[i];
            } 
            else {                       // Odd date
                if(car[i] % 2 == 0)      // Even car
                    total += fine[i];
            }
        }
        return total;
    }
};
