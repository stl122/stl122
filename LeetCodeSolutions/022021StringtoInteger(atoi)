class Solution {
#include <sstream>
public:
    int myAtoi(string s) {
        if(s.empty())
            return 0;
        
        string result = "";
        
        if(isalpha(s[0]))
            return 0;
        
        bool valid = false;
        
        for(int x = 0; x < s.length(); x++){
            if(!valid)
                if(s[x] == ' ')
                    continue;
                else
                    valid = true;
            if(s[x] == '-' || s[x] == '+'){
                result += s[x];
                continue;
            }
            if(isdigit(s[x]))
                result += s[x];
            if(!isdigit(s[x]))
                break;
        }

        stringstream num(result);
        int n = 0;
        num >> n;
        
        return n;
    }
};
