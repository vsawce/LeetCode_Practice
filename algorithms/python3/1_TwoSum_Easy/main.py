from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i):
                if (nums[i] + nums[j] == target):
                    return [j, i]

n1 = [2,7,11,15]
t1 = 9
n2 = [3,2,4]
t2 = 6
n3 = [3,3]
t3 = 6

s = Solution()
print(s.twoSum(n1, t1))
print(s.twoSum(n2, t2))
print(s.twoSum(n3, t3))