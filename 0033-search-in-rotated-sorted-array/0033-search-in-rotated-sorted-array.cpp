class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0 , end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            //left side
            else if(nums[mid]>=nums[0]){
              if(nums[0]<=target && target<nums[mid]){
                end=mid-1;
              }
              else{
                start=mid+1;
              }
            }
            //right side
            else{
              if(nums[mid]<target && target<=nums[end]){
                start=mid+1;
              }
              else{
                end=mid-1;
              }
            }
        }
     return -1;
    }
};