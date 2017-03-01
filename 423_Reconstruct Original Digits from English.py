class Solution(object):
    def originalDigits(self, s):
        """
        :type s: str
        :rtype: str
        """
        list = []
        length = len(s)
        dic = {}
        for i in range(0, length):
            if s[i] in dic:
                dic[s[i]] = dic[s[i]] + 1
            else:
                dic[s[i]] = 1

        # ---0---
        if 'z' in dic:
            c = dic['z']
            del dic['z']
            dic['e'] = dic['e'] - c
            if dic['e'] == 0:
                del dic['e']
            dic['r'] = dic['r'] - c
            if dic['r'] == 0:
                del dic['r']
            dic['o'] = dic['o'] - c
            if dic['o'] == 0:
                del dic['o']
            while c > 0:
                list.append(0)
                c = c - 1

        # ---8---
        if 'g' in dic:
            c = dic['g']
            dic['e'] = dic['e'] - c
            if dic['e'] == 0:
                del dic['e']
            dic['i'] = dic['i'] - c
            if dic['i'] == 0:
                del dic['i']
            del dic['g']
            dic['h'] = dic['h'] - c
            if dic['h'] == 0:
                del dic['h']
            dic['t'] = dic['t'] - c
            if dic['t'] == 0:
                del dic['t']
            while c > 0:
                list.append(8)
                c = c - 1

        # ---4---
        if 'u' in dic:
            c = dic['u']
            dic['f'] = dic['f'] - c
            if dic['f'] == 0:
                del dic['f']
            dic['o'] = dic['o'] - c
            if dic['o'] == 0:
                del dic['o']
            del dic['u']
            dic['r'] = dic['r'] - c
            if dic['r'] == 0:
                del dic['r']
            while c:
                list.append(4)
                c = c - 1

        # ---2---
        if 'w' in dic:
            c = dic['w']
            dic['t'] = dic['t'] - c
            if dic['t'] == 0:
                del dic['t']
            dic['o'] = dic['o'] - c
            if dic['o'] == 0:
                del dic['o']
            del dic['w']
            while c:
                list.append(2)
                c = c - 1

        # ---6---
        if 'x' in dic:
            c = dic['x']
            dic['s'] = dic['s'] - c
            if dic['s'] == 0:
                del dic['s']
            dic['i'] = dic['i'] - c
            if dic['i'] == 0:
                del dic['i']
            del dic['x']
            while c:
                list.append(6)
                c = c - 1

        # ---5---
        if 'f' in dic:
            c = dic['f']
            del dic['f']
            dic['i'] = dic['i'] - c
            if dic['i'] == 0:
                del dic['i']
            dic['v'] = dic['v'] - c
            if dic['v'] == 0:
                del dic['v']
            dic['e'] = dic['e'] - c
            if dic['e'] == 0:
                del dic['e']
            while c:
                list.append(5)
                c = c - 1

        # ---3---
        if 'h' in dic:
            c = dic['h']
            dic['t'] = dic['t'] - c
            if dic['t'] == 0:
                del dic['t']
            del dic['h']
            dic['r'] = dic['r'] - c
            if dic['r'] == 0:
                del dic['r']
            dic['e'] = dic['e'] - 2 * c
            if dic['e'] == 0:
                del dic['e']
            while c:
                list.append(3)
                c = c - 1

        # ---1---
        if 'o' in dic:
            c = dic['o']
            del dic['o']
            dic['n'] = dic['n'] - c
            if dic['n'] == 0:
                del dic['n']
            dic['e'] = dic['e'] - c
            if dic['e'] == 0:
                del dic['e']
            while c:
                list.append(1)
                c = c - 1

        # ---7---
        if 's' in dic:
            c = dic['s']
            del dic['s']
            dic['e'] = dic['e'] - c
            if dic['e'] == 0:
                del dic['e']
            dic['v'] = dic['v'] - c
            if dic['v'] == 0:
                del dic['v']
            dic['e'] = dic['e'] - c
            if dic['e'] == 0:
                del dic['e']
            dic['n'] = dic['n'] - c
            if dic['n'] == 0:
                del dic['n']
            while c:
                list.append(7)
                c = c - 1

        # ---9---
        if 'e' in dic:
            c = dic['e']
            while c:
                list.append(9)
                c = c - 1

        list.sort()
        ss = ''
        for i in list:
            ss = ss + str(i)
        return ss