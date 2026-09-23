## Problem: Valid Anagram (Easy)

### Approach

I used a frequency array to count the characters in both strings.
If the character counts are the same, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the program with "anagram" and "nagaram", which gives Anagram.
I also tested "rat" and "car", which gives Not Anagram.