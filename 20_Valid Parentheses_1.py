# by intuition, using stack
# 49.5%
class Solution(object):

    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        list=[]
        for c in s:
            if c=='(' or c=='{' or c=='[':
                list.append(c)
                continue
            elif len(list)==0:
                return False
            else:
                p=list.pop()
                if (p=='(' and c==')') or (p=='[' and c==']') or (p=='{' and c=='}') :
                    continue
                else:
                    return False
        if len(list)==0:
            return True
        else:
            return False

if __name__ == "__main__":
    s="["
    S=Solution()
    print(S.isValid(s))

