#51.03
class Solution(object):
	def romanToInt(self, s):
		dic={'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000, 'IV':4, 'IX':9, 'XL':40, 'XC':90, 'CD':400, 'CM':900}
		l=len(s)
		count=0
		i=0
		while i<l:
			if i+1<l and (s[i]+s[i+1] in dic):
				count=count+dic[s[i]+s[i+1]]
				i=i+2
			else:
				count=count+dic[s[i]]
				i=i+1
		return count

		
if __name__ == "__main__":
	a=input()
	print (Solution().romanToInt(a))
