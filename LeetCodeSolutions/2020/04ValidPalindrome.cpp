class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
            return true;
        if(s.size() == 0)
          return true;
        int left = 0, right = s.size() - 1;
            while(left <= right){
                while(left <= right){
                    if('a' <= s[left] && s[left] <= 'z'){
                        break;
                    }
                    else if('A' <= s[left] && s[left] <= 'Z'){
                        s[left] = s[left] + 32;
                        break;
                    }
                    else if(isdigit(s[left])){
                        break;
                    }
                    else{
                        left++;
                    }
                }
                while(left <= right){
                    if('a' <= s[right] && s[right] <= 'z'){
                        break;
                    }
                    else if('A' <= s[right] && s[right] <= 'Z'){
                        s[right] = s[right] + 32;
                        break;
                    }
                    else if(isdigit(s[right])){
                        break;
                    }
                    else{
                        right--;
                    }
                }
                if(left <= right){
                    if(s[left] != s[right])
                      return false;
                    left++;
                    right--;
                }
            }
            
        return true;
    }
};
