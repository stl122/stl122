class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int answer = 0;
        bool added = false;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i <= nums.size(); i++){
            if(nums[i-1] != i-1){
                answer = i-1;
                added = true;
                break;
            }
        }
        
        if(!added)
            answer = nums.size();
        
        return answer;
    }
};
