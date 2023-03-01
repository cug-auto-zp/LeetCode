/*
1. 两数之和
这道题暴力解法一个个的相加判断

*/

// 如下为我leetcode提交代码

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        for(int i=0;i<nums.size()-1;i++)
        {
                for(int j=i+1;j<nums.size();j++)
                {
                    if (nums[i]+nums[j]==target)
                    {
                        n = {i,j};
                    }
                }
        }
        return n;
    }
    
};