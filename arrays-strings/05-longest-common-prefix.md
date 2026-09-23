# Longest Common Prefix

## Problem
Find the longest common prefix string among an array of strings.

## Link
https://leetcode.com/problems/longest-common-prefix/

## Approach
I compare characters at the same position in all the strings. When the characters are different, the common prefix ends at that position.

## Complexity
- Time: O(n × m)
- Space: O(1)

## Notes
Tested with:
- flower, flow, flight → fl
- dog, racecar, car → empty prefix