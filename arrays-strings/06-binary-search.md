# Binary Search

## Problem
Search for a target value in a sorted array and return its index. Return -1 if the target is not present.

## Link
https://leetcode.com/problems/binary-search/

## Approach
I use two pointers, low and high, to represent the search range. I repeatedly check the middle element and eliminate half of the search range based on whether the target is smaller or larger.

## Complexity
- Time: O(log n)
- Space: O(1)

## Notes
Tested locally:
- Array {1, 3, 5, 7, 9, 11}, target 7 → index 3
- Array {1, 3, 5, 7, 9, 11}, target 10 → -1