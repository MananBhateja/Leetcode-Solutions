class Solution {
    public int minSwapsCouples(int[] row) {
        int i = 0;
        int count = 0;
        int[] nums = row;
        while(i<row.length){
            if(nums[i]%2!=0 && nums[i+1]==nums[i]-1){
                i+=2;
            }
            
            else if(nums[i]%2==0 && nums[i+1]==nums[i]+1){
                i+=2;
            }
            
            else if(nums[i]%2!=0){
                for(int j=i+1; j<row.length; j++){
                    if(nums[j]==nums[i]-1){
                        int temp = nums[j];
                        nums[j] = nums[i+1];
                        nums[i+1] = temp;
                        break;
                    }
                }
                count++;
                i+=2;
            }
            
            else{
                for(int j=i+1; j<row.length; j++){
                    if(nums[j]==nums[i]+1){
                        int temp = nums[j];
                        nums[j] = nums[i+1];
                        nums[i+1] = temp;
                        break;
                    }
                }
                count++;
                i+=2;
            }
        }
        return count;
    }
}