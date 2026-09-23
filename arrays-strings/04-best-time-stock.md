## Problem: Best Time to Buy and Sell Stock (Easy)

### Approach

I keep track of the lowest price seen so far.
For each price, I calculate the possible profit and keep the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested [7,1,5,3,6,4], which gives a maximum profit of 5.
I also tested [7,6,4,3,1], which gives a maximum profit of 0.