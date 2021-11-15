class Solution {
public:
    string intToRoman(int num) {
        string str = to_string(num);
        string res;
        
        int digits = str.length();
        
        for(int i = 0; i < str.length(); i++){
            switch(str[i]){
                case '9':
                    if(digits == 3)
                        res.append("CM");
                    else if(digits == 2)
                        res.append("XC");
                    else if(digits == 1)
                        res.append("IX");
                    break;
                case '8':
                    if(digits == 3)
                        res.append("DCCC");
                    else if(digits == 2)
                        res.append("LXXX");
                    else if(digits == 1)
                        res.append("VIII");
                    break;
                case '7':
                    if(digits == 3)
                        res.append("DCC");
                    else if(digits == 2)
                        res.append("LXX");
                    else if(digits == 1)
                        res.append("VII");
                    break;
                case '6':
                    if(digits == 3)
                        res.append("DC");
                    else if(digits == 2)
                        res.append("LX");
                    else if(digits == 1)
                        res.append("VI");
                    break;
                case '5':
                    if(digits == 3)
                        res.append("D");
                    else if(digits == 2)
                        res.append("L");
                    else if(digits == 1)
                        res.append("V");
                    break;
                case '4':
                    if(digits == 3)
                        res.append("CD");
                    else if(digits == 2)
                        res.append("XL");
                    else if(digits == 1)
                        res.append("IV");
                    break;
                case '3':
                    if(digits == 4)
                        res.append("MMM");
                    else if(digits == 3)
                        res.append("CCC");
                    else if(digits == 2)
                        res.append("XXX");
                    else if(digits == 1)
                        res.append("III");
                    break;
                case '2':
                    if(digits == 4)
                        res.append("MM");
                    else if(digits == 3)
                        res.append("CC");
                    else if(digits == 2)
                        res.append("XX");
                    else if(digits == 1)
                        res.append("II");
                    break;
                case '1':
                    if(digits == 4)
                        res.append("M");
                    else if(digits == 3)
                        res.append("C");
                    else if(digits == 2)
                        res.append("X");
                    else if(digits == 1)
                        res.append("I");
                    break;
            }
            digits--;
        }
        //cout << digits;
        
        return res;
    }
};
