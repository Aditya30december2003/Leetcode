class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int gola_index=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
            gola_index=i-1;
            break;
          }
        }
        
    if(gola_index!=-1){
       int swap_index=gola_index;
        for(int i=n-1;i>=(gola_index+1);i--)
        {
            if(nums[i]>nums[gola_index]){
                swap_index=i;
                break;
            }
        }
        swap(nums[swap_index] , nums[gola_index]);
    }

        reverse(nums.begin()+gola_index+1 , nums.end());
     
    }
};