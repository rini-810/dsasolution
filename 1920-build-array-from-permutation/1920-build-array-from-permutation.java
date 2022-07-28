class Solution {
    public int[] buildArray(int[] num) {
      int[] ans = new int[num.length];
        for(int i=0;i<num.length;i++){
            ans[i]=num[num[i]];
        }
        return ans;  
    }
}