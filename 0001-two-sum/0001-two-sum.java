class Solution {
    public int[] twoSum(int[] arr, int t) {
        int res[]=new int[2];
        int n=arr.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==t){
                    res[0]=i;
                    res[1]=j;
                    break;
                }
            }
        }
        return res;
        
    }
}