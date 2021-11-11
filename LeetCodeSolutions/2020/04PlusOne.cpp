using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        digits[length-1] = digits[length-1] + 1;
        for(int i = length; i > 1; i--){
            if (digits[i-1] == 10){
                digits[i-1] = 0;
                digits[i-2] += 1;
            }
        }
        if(digits[0] == 10){
            digits[0]=1;
            digits.push_back(0);
        }
        return digits;
    }
};
