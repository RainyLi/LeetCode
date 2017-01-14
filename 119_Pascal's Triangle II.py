class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        list=[1]
        for i in range(0,rowIndex+1):
            for j in range(0, i+1):
                if j==0:
                    list[j]=1
                    temp=1
                elif j==i:
                    list.append(1)
                else:
                    temp2=list[j]
                    list[j]=temp+list[j]
                    temp=temp2
        return list