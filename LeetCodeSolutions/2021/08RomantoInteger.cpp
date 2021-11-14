class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        bool end = false;
        
        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case 'M':
                    answer += 1000;
                    break;
                case 'D':
                    answer += 500;
                    break;
                case 'C':
                    if(s[i+1] == 'M'){
                        answer += 900;
                        i++;
                    }
                    else if(s[i+1] == 'D'){
                        answer += 400;
                        i++;
                    }
                    else
                        answer += 100;
                    break;
                case 'L':
                    answer += 50;
                    break;
                case 'X':
                    if(s[i+1] == 'C'){
                        answer += 90;
                        i++;
                    }
                    else if(s[i+1] == 'L'){
                        answer += 40;
                        i++;
                    }
                    else
                        answer += 10;
                    break;
                case 'V':
                    answer += 5;
                    break;
                case 'I':
                    if(s[i+1] == 'X'){
                        answer += 9;
                        i++;
                    }
                    else if(s[i+1] == 'V'){
                        answer += 4;
                        i++;
                    }
                    else
                        answer += 1;
                    break;
            }
        }
        
        return answer;
    }
};
