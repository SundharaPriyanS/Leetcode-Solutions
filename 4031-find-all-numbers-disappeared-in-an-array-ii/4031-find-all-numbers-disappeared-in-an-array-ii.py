class Solution(object):
    def findDisappearedNumbers(self, nums, lower, upper):
        """
        :type nums: List[int]
        :type lower: int
        :type upper: int
        :rtype: List[List[int]]
        """
        li=[]
        cur=lower
        newn=sorted(set(nums))
        for i in newn:
            if lower>i:
                continue
            if upper<i:
                break
            if cur<i:
                li.append([cur,i-1])
            cur=i+1
        if (cur<=upper):
            li.append([cur,upper])
        return li