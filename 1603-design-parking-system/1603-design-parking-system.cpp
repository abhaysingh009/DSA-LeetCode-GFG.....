class ParkingSystem {
public:
    int c1;
    int c2;int c3;
    ParkingSystem(int big, int medium, int small) {
        c1=big;c2=medium;c3=small;
        
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(c1!=0){
                c1--;
                return true;
            }
            return false;
        }
        if(carType==2){
            if(c2!=0){
                c2--;
                return true;
            }
            return false;

        }
        else{
            if(c3!=0){
                c3--;
                return true;
            }
            return false;

        }
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */