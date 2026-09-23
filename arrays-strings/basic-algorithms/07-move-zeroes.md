# Move Zeroes

## Problem
Move all zeroes in an array to the end while maintaining the relative order of the non-zero elements.

## Link
https://leetcode.com/problems/move-zeroes/

## Approach
I scan the array and keep a position for the next non-zero element. Whenever a non-zero value is found, I swap it into that position and move the position forward.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
Tested locally:
- {0, 1, 0, 3, 12} → {1, 3, 12, 0, 0}
- {0, 0, 1} → {1, 0, 0}