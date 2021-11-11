class Solution {
public:
#include <vector> 
#include <algorithm>
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it = std::unique(nums.begin(), nums.end());
        nums.resize(std::distance(nums.begin(), it));
        return nums.size();
    }
};
