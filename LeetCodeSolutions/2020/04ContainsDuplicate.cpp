class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1)
            return false;
        std::sort(nums.begin(), nums.end());
        vector<int> dupe = nums;
        vector<int>::iterator it = std::unique(dupe.begin(), dupe.end());
        dupe.resize(std::distance(dupe.begin(), it));
        if(dupe == nums)
            return false;
        else
            return true;
    }
};
