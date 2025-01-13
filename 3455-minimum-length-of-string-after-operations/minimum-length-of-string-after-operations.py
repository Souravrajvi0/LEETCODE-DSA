class Solution(object):
    def minimumLength(self, s):
                return sum(1 if x % 2 else 2 for x in Counter(s).values())

       
        