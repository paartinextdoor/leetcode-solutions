class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int left = 0, right = left+2, mid =left+1;
        
        while (right < nums.size()){
            if(nums[right]>nums[left] && nums[mid]>nums[left]){
                return true;
            }
            left++;
            mid++;
            right++;
        }
        return false;
    }
};
