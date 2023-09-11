from typing import List

# class Solution:
#     def merge(self, intervals: List[List[int]]) -> List[List[int]]:
#         merged = []
#         for i in range(len(intervals) - 2):
#             if intervals[i][1] >= intervals[i+1][0] and intervals[i][1] <= intervals[i+1][1]:
#                 arr = [intervals[i][0], intervals[i+1][1]]
#                 merged.append(arr)
#                 intervals.remove(intervals[i+1])
#             else:
#                 merged.append(intervals[i])
#         merged.append(intervals[len(intervals) - 1])
#         return merged

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key= lambda i : i[0]) #sorting with the first element of the each intervals
        merged = [intervals[0]]
        for start, end in intervals[1:]:
            recentend = merged[-1][1]
            if start <= recentend:
                merged[-1][1] = max(end, recentend) # max is used because if the recentend may be smaller the end like [[1, 5], [2, 4]]
            else:
                merged.append([start, end])
        return merged
            
if __name__ == "__main__":
    sol = Solution()
    intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
    # intervals = [[1, 4], [4, 5]]
    print(sol.merge(intervals))