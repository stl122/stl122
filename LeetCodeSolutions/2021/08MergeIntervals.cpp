class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() < 2)
            return intervals;
        
        sort(intervals.begin(), intervals.end());
        
        int index = 0;
        
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[index][1] >= intervals[i][0])
                intervals[index][1] = max(intervals[index][1], intervals[i][1]);
            else
                intervals[++index] = intervals[i];
        }
        
        intervals.resize(index+1);
        
        return intervals;
    }
};
