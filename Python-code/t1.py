class solution:
    def isp(self,x:int) -> bool:
        s = str(x)
        print(s)

        s1 = s[::-1]
        print(s1)

        if s1==s:
            return True
        else:
            return False

s = solution()
a= s.isp(-121)
print(a)