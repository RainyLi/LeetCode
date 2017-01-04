#17.06%
class Solution(object):
	def longestCommonPrefix(self, strs):
		import os
		return os.path.commonprefix(strs)

		
if __name__ == "__main__":
	strs=['dafrr','da','dafr']
	print(Solution().longestCommonPrefix(strs))
