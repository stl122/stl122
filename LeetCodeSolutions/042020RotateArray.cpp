#include <algorithm>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int rot = k % size;
        if(k % size == 0)
            return;
        std::rotate(nums.begin(), nums.begin()+size-rot, nums.end());
    }
};
