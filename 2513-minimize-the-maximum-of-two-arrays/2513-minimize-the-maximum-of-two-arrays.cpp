class Solution {
public:
// bool check(int ans,int d1, int d2, int un1,int un2){
//     int NotdivByd1=0, NotdivByd2 =0, NotDivByboth=0;
//     for(int i=1;i<=ans;i++){
//         if(i%d1!=0 and i%d2!=0)NotDivByboth++;
//         else if(i%d2!=0){
//             NotdivByd2++;
//         }else if(i%d1!=0){
//             NotdivByd1++;
//         }
//     }
//     int needFor1=un1-NotdivByd1;
//     int needFor2=un2-NotdivByd2;
//     int total=0;
//     if(needFor1>0)total+=needFor1;
//     if(needFor2>0)total+=needFor2;
//     return total<=NotDivByboth;
// }
bool check(long long ans,int d1, int d2, int un1,int un2){

    long long lcm = 1LL*d1/gcd(d1, d2)*d2;

    int NotdivByd1= ans/d2 - ans/lcm;
    int NotdivByd2= ans/d1 - ans/lcm;
    long long NotDivByboth = ans - ans/d1 - ans/d2 + ans/lcm;

    int needFor1=un1-NotdivByd1;
    int needFor2=un2-NotdivByd2;
    int total=0;
    if(needFor1>0)total+=needFor1;
    if(needFor2>0)total+=needFor2;
    return total<=NotDivByboth;
}
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long low=1; long  high=2e9;
        long long ans=0;
        while(low<=high){
            long long mid=(low + high)/2;
            if(check(mid,divisor1,divisor2,uniqueCnt1,uniqueCnt2)){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
};