class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        if(n == 0)
            return 0;
        int result = 0;
        char array[n + 1];
        strcpy(array, s.c_str());
        for(int i = 0; i < n; i++){
            if(array[i] == 'I'){
                if(array[i+1] == 'V'){
                    result += 4;
                    i++;
                    continue;
                }
                if(array[i+1] == 'X'){
                    result += 9;
                    i++;
                    continue;
                }
                else{
                    result += 1;
                }
            }
            if(array[i] == 'V')
                result += 5;
            if(array[i] == 'X'){
                if(array[i+1] == 'L'){
                    result += 40;
                    i++;
                    continue;
                }
                if(array[i+1] == 'C'){
                    result += 90;
                    i++;
                    continue;
                }
                else{
                    result += 10;
                }
            }
            if(array[i] == 'L'){
                result += 50;
                continue;
            }
            if(array[i] == 'C'){
                if(array[i+1] == 'D'){
                    result += 400;
                    i++;
                    continue;
                }
                if(array[i+1] == 'M'){
                    result += 900;
                    i++;
                    continue;
                }
                else{
                    result += 100;
                }
            }
            if(array[i] == 'D'){
                result += 500;
                continue;
            }
            if(array[i] == 'M'){
                result += 1000;
                continue;
            }
        }
        return result;
    }
};
