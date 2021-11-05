#include <iostream>
#include <string>
#include <sstream> 
#include <limits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        for(int i = 0; i < (str.length())/2; i++){
            char temp = str[i];
            str[i] = str[str.length()-i-1];
            str[str.length()-i-1] = temp;
        }
        stringstream s(str);
        int num = 0;
        s >> num;
        if(num >= numeric_limits<int>::max())
            return 0;
        if(x < 0)
            num = -num;
        return num;
    }
};
