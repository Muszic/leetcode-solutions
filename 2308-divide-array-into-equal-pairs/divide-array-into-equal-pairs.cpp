class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(auto x:nums)m[x]++;
        for(auto &x:m)
        {
            if(x.second%2)return false;
        }
        return true;
        
        
    }
};