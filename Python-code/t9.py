"""
9.回文数

思路：将其转化为字符串会非常的简单
再利用字符串翻转进行对比即可


"""
# 这个是 leetcode 提交代码
class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        print(s)
        s1 = s[::-1]
        # print(s1)
        if s1==s:
            return True
        else:
            return False
        

# 这个是自己写的测试代码

# class solution:
#     def isp(self,x:int) -> bool:
#         s = str(x)
#         print(s)
#         s1 = s[::-1]
#         print(s1)
#         if s1==s:
#             return True
#         else:
#             return False
# s = solution()
# a= s.isp(-121)
# print(a)



