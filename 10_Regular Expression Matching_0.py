#超时：需要改成动态规划的方法

class Solution(object):
	def isMatch(self, s, p):
		#dp = [[False for i in range(len(p) + 1)] for j in range(len(s) + 1)]
		a=self.isMatchHelper(s, p, 0, 0, dp)
		return a

	def isMatchHelper(self, s, p, i, j, dp):

		ls=len(s)
		lp=len(p)
		if j>=lp:
			return i>=ls

		if (i>=ls) :
			if p[j]=='*':
				return self.isMatchHelper(s, p, i-1, j+1) or self.isMatchHelper(s, p, i, j+1)
			if (j+1>=lp):
				return False
			if (p[j+1]!='*'):
				return False
			else:
				return self.isMatchHelper(s, p, i, j+2)

		if (s[i]==p[j])|(p[j]=='.'):
			return self.isMatchHelper(s, p, i+1,j+1)

		if p[j]=='*':
			ii=i
			if self.isMatchHelper(s, p, ii, j + 1):
				return True
			while ii<ls and ((s[ii]==p[j-1])|(p[j-1]=='.')):
				if self.isMatchHelper(s, p, ii, j+1):
					return True
				if self.isMatchHelper(s, p, ii+1, j+1):
					return True
				ii=ii+1
			return self.isMatchHelper(s,p,i-1,j+1)

		if (s[i]!=p[j]) and (j+1<lp) and (p[j+1]=='*'):
			return self.isMatchHelper(s, p, i,j+2)

		return False




		
if __name__ == "__main__":
	assert Solution().isMatch("aaaaaaaaaaaaab", "a*a*a*a*a*a*a*a*a*a*c") == False
	assert Solution().isMatch("a", ".*") == True
	assert Solution().isMatch("aaca", "ab*a*c*a") == True
	assert Solution().isMatch("aaba", "ab*a*c*a") == False
	assert Solution().isMatch("aab", "a*b") == True
	assert Solution().isMatch("bbbba", ".*a*a") == True
	assert Solution().isMatch("aaa", "ab*a*c*a") == True
	assert Solution().isMatch("a", "ab*") == True
	assert Solution().isMatch("aaa", "a*a") == True
	assert Solution().isMatch("ab",".*c") == False
	assert Solution().isMatch("aa", "aa") == True
	assert Solution().isMatch("aaa","aa") == False
	assert Solution().isMatch("aa","a*") == True
	assert Solution().isMatch("aa",".*") == True
	assert Solution().isMatch("ab",".*") == True
	assert Solution().isMatch("aab", "c*a*b") == True