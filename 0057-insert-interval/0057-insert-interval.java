class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        int start=newInterval[0];
        int end=newInterval[1];
        List<int[]>arr=new ArrayList<>();
        int i=0;
        while(i<intervals.length && intervals[i][1]<start){
            arr.add(intervals[i]);
            i++;
           
        }
       while(i<intervals.length && intervals[i][0]<=end){
         start=Math.min(intervals[i][0],start);
         end=Math.max(intervals[i][1],end);
         i++;
       }
       arr.add(new int[]{start,end});
       
       while(i<intervals.length){
        arr.add(intervals[i]);
        i++;
       }
        return arr.toArray(new int[arr.size()][]);
       
    }
}