# GDSC-CompetitiveCoding
GDSC SRMRMP Recruitment Task
There are 2 files for GDSC SRM Ramapuram Technical Task 6-Competitive Programming
1st file(gdsccomp1.c) is of
    Question 1: Given a string s consisting of words and spaces, return the length of the last word in the string.
                A word is a maximal substring consisting of non-space characters only.
    Example 1:
      Input: s = "Hello World"
      Output: 5
    Explanation: The last word is "World" with length 5.
    Example 2:
      Input: s = "   fly me   to   the moon  "
      Output: 4
        Explanation: The last word is "moon" with length 4.
    Constraints:
      1 <= s.length <= 104
      s consists of only English letters and spaces ' '.
      There will be at least one word in s.

2nd file(gdsccomp2.c) is of
    Question 2:Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b],                   nums[c], nums[d]] such that:
                                  0 <= a, b, c, d < n
                                  a, b, c, and d are distinct.
                                  nums[a] + nums[b] + nums[c] + nums[d] == target
                                  You may return the answer in any order.
    Example 1:
      Input: nums = [1,0,-1,0,-2,2], target = 0
      Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
    Example 2:
      Input: nums = [2,2,2,2,2], target = 8
      Output: [[2,2,2,2]]
    Constraints:
      1 <= nums.length <= 200
      -109 <= nums[i] <= 109
      -109 <= target <= 109
