class Solution {
public:
    int firstUniqChar(string s) {
        if(s.empty())
            return -1;
        
        int map[26]{0};
        for(int i = 0; i < s.size(); i++){ 
            map[s[i] -'a']++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if (map[s[i] -'a'] == 1) 
                return i;
        }

        return -1;
    }
};
