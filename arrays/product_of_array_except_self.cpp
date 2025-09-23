class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int indx =-1, prod = 1, zero =0;
       
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0){
                zero++;
                indx=i;
            }else{
                prod *= nums[i];
            }
        }
        vector<int> answer(nums.size(),0);

        if (zero == 0) {
        for (int i = 0; i < nums.size(); i++)
            answer[i] = prod / nums[i];
        }
       if(zero==1){
            answer[indx]=prod;
        } 
    return answer;
    }
};
