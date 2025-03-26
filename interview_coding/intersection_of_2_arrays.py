#https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution(object):
    def intersect(self, nums1, nums2):
        freq_map = {}  # Dictionary to store frequencies of nums1
        result = []

        # Count occurrences of elements in nums1
        for num in nums1:
            if num in freq_map:
                freq_map[num] += 1
            else:
                freq_map[num] = 1

        # Check elements in nums2
        for num in nums2:
            if num in freq_map and freq_map[num] > 0:
                result.append(num)
                freq_map[num] -= 1  # Reduce count to handle duplicates correctly

        return result