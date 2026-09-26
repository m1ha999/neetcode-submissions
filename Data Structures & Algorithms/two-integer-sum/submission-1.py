class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        i = 0
        while i < len(nums):
            difference = target - nums[i] # 9-2 = 7
            if difference in hashmap: #proverava kljuceve
                return [hashmap[difference], i] # vrati mi znaci gde se nalazi razlika na kom indeksu, i trenutni broj
            else:
                hashmap[nums[i]] = i
            i = i + 1

        return []