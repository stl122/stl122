class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() == 1)
            return;
        
        int rs = 0;
        int ws = 0;
        int bs = 0
            ;
        for(int i = 0; i < nums.size(); i++){
            switch(nums[i]){
                case 0:
                    rs++;
                    break;
                case 1:
                    ws++;
                    break;
                case 2:
                    bs++;
                    break;
            }
        }
        
        int n = 0;
        while(n < rs){
            nums[n] = 0;
            n++;
        }
        while(n < rs + ws){
            nums[n] = 1;
            n++;
        }
        while(n < rs + ws + bs){
            nums[n] = 2;
            n++;
        }
    }
};
