class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer>arr=new TreeSet<>();
        if(nums.length==0){
            return 0;
        }
        int count=1;
        for(int i=0;i<nums.length;i++){
            arr.add(nums[i]);
        }
         int maxCount=1;
         Integer prev=null;
         for(int num:arr){
            if(prev!=null){
                if(num==prev+1){
                    count++;
                }
                else{
                    count=1;
                }
                
            }

            maxCount=Math.max(count,maxCount);
            prev=num;
         }

        return maxCount;
    }
}