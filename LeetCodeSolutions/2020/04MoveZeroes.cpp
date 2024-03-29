class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1)
            return;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }
        for(j; j < nums.size(); j++){
            nums[j] = 0;
        }
    }
};
