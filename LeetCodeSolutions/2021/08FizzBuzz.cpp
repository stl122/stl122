class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        
        for(int i = 1; i < n+1; i++){
            if(!(i%3) && !(i%5)){
                answer.push_back("FizzBuzz");
                continue;
            }
            else if(!(i%3)){
                answer.push_back("Fizz");
                continue;
            }
            else if(!(i%5)){
                answer.push_back("Buzz");
                continue;
            }
            else
                answer.push_back(to_string(i));
        }
        
        return answer;
    }
};
