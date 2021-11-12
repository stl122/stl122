class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values;
        int to_add = 0;
        for (int i = 0; i < nums.size(); i++) {
            to_add = nums[i];
            auto compliment = values.find(target - to_add);
            if (compliment != values.end()) {
                return vector<int>({i, compliment->second});
            }
            else {
                values[to_add] = i;
            }
        }
        return vector<int>();
    }
};
