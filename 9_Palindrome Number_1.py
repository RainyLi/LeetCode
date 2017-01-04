#60.51%

class Solution(object):
	def isPalindrome(self, x):
		a=str(x)
		l=len(a)
		i=0
		j=l-1
		while i<=j:
			if a[i]!=a[j]:
				return False
			i+=1
			j-=1
		return True
		
x=int(input())
print(Solution().isPalindrome(x))