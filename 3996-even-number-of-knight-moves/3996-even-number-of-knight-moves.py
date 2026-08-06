class Solution(object):
    def canReach(self, start, target):
        """
        :type start: List[int]
        :type target: List[int]
        :rtype: bool
        """
        st=start[0]+start[1]
        tg=target[0]+target[1]
        return (st%2==tg%2)
        