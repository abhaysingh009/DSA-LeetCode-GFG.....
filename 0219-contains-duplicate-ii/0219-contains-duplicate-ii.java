class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map <Integer,Integer> temp=new HashMap();
        int i=0;
        for(int e:nums){
            if(temp.containsKey(e) && Math.abs(i-temp.get(e))<=k ){
                return true;
            }
            temp.put(e,i);
            i++;
        }
        return false;
    }
}