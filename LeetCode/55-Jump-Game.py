class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums) == 0:
            return False

        will_reach = [False] * len(nums)
        will_reach[-1] = True
        s = len(nums)

        for i in range(len(nums) - 1, -1, -1):
            n = nums[i]
            if n + i + 1 > s:
                n -= (n + i + 1 - s)
            for j in range(i, i + n + 1):
                if will_reach[j]:
                    will_reach[i] = True
                    break

        return will_reach[0]