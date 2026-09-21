class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums2 = []
        for num in nums:
            if num in nums2:
                continue
            nums2.append(num)

        if nums2 == nums:
            return False
        else:
            return True