class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        
        int hlength = haystack.length();
        int nlength = needle.length();
        
        if(hlength < nlength)
            return -1;
        
        for(int x = 0; x < hlength-nlength+1; x++){
            if(haystack[x] == needle[0]){
                if(haystack.substr(x, nlength) == needle)
                    return x;
            }
        }
        
        return -1;
    }
};
