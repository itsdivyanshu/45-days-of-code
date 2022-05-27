// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp(n, 0);
        
        for(auto it : nums)
        {
            temp[it]++;
            if(temp[it] > 1)
                return it;
        }
        
        return -1;
    }
};