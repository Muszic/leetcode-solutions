//question link-https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            if(ans.empty())ans.push_back(intervals[i]);
            auto &x=ans.back();
            if(x[1]>=intervals[i][0])x[1]=max(x[1],intervals[i][1]);
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
