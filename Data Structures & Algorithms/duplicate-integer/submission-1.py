class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        #CONTAINS DUPLICATES NEET CODE
        skup = set(nums)

        if len(skup) == len(nums):
            return False
        else:
            return True