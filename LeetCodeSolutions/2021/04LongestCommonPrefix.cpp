class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string k = "";
        
        if(strs.size() == 0){
            return k;
        }
        
        int min = INT_MAX, n, i, f = 0, j;
        
        for(auto x: strs){
            n = x.size();
            if(min > n)
                min = n;
        }
        
        for(i = 0; i < n; i++){
            f = 0;
            for(j = 1; j < strs.size(); j++){
                if(strs[j][i] != strs[j-1][i]){
                    f = 1;
                    break;
                }
            }
            if(f == 0){
                k += strs[0][i];
            }
            else
                break;
        }
        
        return k;
    }
};
