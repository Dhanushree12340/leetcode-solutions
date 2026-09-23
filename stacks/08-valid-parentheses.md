# Valid Parentheses

## Problem
Determine if the input string containing parentheses is valid.

## Link
https://leetcode.com/problems/valid-parentheses/

## Approach
I use a stack to store opening brackets. When a closing bracket is found, I compare it with the most recent opening bracket. The string is valid only when all brackets match correctly and the stack is empty at the end.

## Complexity
- Time: O(n)
- Space: O(n)

## Notes
Tested locally:
- ()[]{} → Valid Parentheses
- ([)] → Invalid Parentheses