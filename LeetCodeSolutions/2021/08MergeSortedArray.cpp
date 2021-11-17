class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0)
            return;
        if(m == 0){
            nums1 = nums2;
            return;
        }

        n = 0;
        
        for(int i = m; i < nums1.size(); i++){
            nums1[i] = nums2[n];
            n++;
        }
        
        sort(nums1.begin(), nums1.end());
    }
};
