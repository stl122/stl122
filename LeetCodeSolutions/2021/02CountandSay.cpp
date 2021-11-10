class Solution {
#include <string>
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        
        string str = countAndSay(n-1);
        
        string res = "";
        
        int ins = 1;

        for(int x = 0; x < str.length(); x++){
            if(str[x] == str[x+1]){
                ins++;
            }
            else{
                char num = str[x];
                res += '0' + ins;
                res += num;
                ins = 1;
            }
        }
        return res;
    }
};
