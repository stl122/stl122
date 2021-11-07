class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        multiset<int> set;
        
        for(auto i : nums1){
            set.insert(i);
        }
        
        for(auto i : nums2){
            auto it = set.find(i);
            if(it != set.end()){
                result.push_back(i);
                set.erase(it);
            }
        }
        
        return result;
    }
};
