#23.5%
class Solution(object):
	def intToRoman(self, num):
		cha=('M','D','C','L','X','V','I')
		str=""
		p=-2
		i=1000
		while num:
			x=int(num/i)
			num=num%i
			i=i/10
			p=p+2
			if x==0:
				continue
			elif x>0 and x<4:
				while x:
					str = str + cha[p]
					x = x - 1
				continue
			elif x==4:
				str=str+cha[p]+cha[p-1]
			elif x>=5 and x<9:
				x=x-5
				str=str+cha[p-1]
				while x:
					str=str+cha[p]
					x=x-1
				continue
			else:
				str=str+cha[p]+cha[p-2]
		return str


		
if __name__ == "__main__":
	a=int(input())
	print (Solution().intToRoman(a))
