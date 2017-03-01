class Solution(object):
    def findRepeatedDnaSequences(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        l=len(s)
        stringList={}
        returnList=[]
        for i in range(l):
            ss=s[i:i+10]
            if ss in stringList:
                if ss not in returnList:
                    returnList.append(ss)
            else:
                stringList[ss]=True
        return returnList