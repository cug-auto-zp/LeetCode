'''
1. 两数之和
这道题暴力解法一个个的相加判断

'''

# 如下为我leetcode提交代码

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        for i in range(0,len(nums)):
            for j in range(i+1,n):
                if (nums[i]+nums[j]==target):
                    a = [i,j]
                    return a