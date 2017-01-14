class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        list=[]
        for i in range(0, numRows):
            list.append([])
            for j in range(0, i+1):
                if j==0:
                    a=1
                elif j==i:
                    a=1
                else:
                    a=list[i-1][j-1]+list[i-1][j]
                list[i].append(a)
        return list