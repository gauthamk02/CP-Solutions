class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people = sorted(people)

        end = len(people) - 1
        start = 0
        count = 0

        while start <= end:
            if people[start] + people[end] <= limit:
                start += 1
                end -= 1
            else:
                end -= 1
            count += 1

        return count