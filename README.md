# GFG-Must-Do-Coding-Interview-Problems

Solved problems from the GeeksForGeeks coding course. It is free of cost and more organized than solving random Leetcode problems. I will mention the problem name with the best possible (known) solution as a hint for a quick revision.

# Array

1. **missing-number-in-array**: Sum up the numbers and subtract each element. O(n) 
2. **majority-element**: Traverse just once, keeping track of element counts in array itself. O(n)
3. **leaders-in-an-array**: Traverse in reverse, keeping track of max till now. If it changes, print it. O(n)
4. **equilibrium-point**: 
5. **largest-subarray-of-0s-and-1s**: Convert 0's to -1 then find largest subarray with sum 0 using hashmap. O(n)
6. **subarray-with-given-sum**: 
7. **sort-an-array-of-0s-1s-and-2s**: Count number of 0's, 1's and 2's. Fill array till count of 0, 1 and 2 becomes zero. O(n)
8. **inversion-of-array**: Modified merge sort. O(nlogn)
9. **kadane's algorithm**: Classic algorithm. O(n)
10. **stock-buy-and-sell**: Check for maxima/minima for buying/selling respectively. O(n)
11. **k'th smallest element**: Can be solved either using binary heap or partitioning principle of quick sort. O(n)
12. **rearrange-array-alternately**: I just printed it alternatively using 2 pointers. Real solution is some bullshit math trick which I would never come up with in a real interview.
13. **minimum-platforms**: Sort all the timings, mapping it with A or D for arrival/departure. For every arrival, +1 the counter, for departure, -1. Then print the max count.
14. **boolean-matrix-problem**: Traverse the array, store row/coloumn where 1 occurs. Traverse again and print 1 if it belongs to earlier stored row/coloumn.
15. **merge-without-extra-space**: Study shellshort then solve it. O((n+m)log(n+m)), constant extra space.
16. **binary-search**: Classic algorithm

# String
1. **anagram**:
2. **reverse-words-in-a-given-string**: Reverse individual words, then reverse the complete string. O(n)
3. **remove-duplicates**: Use hashmap to store characters occuring for the first time, print them.
4. **longest-distinct-characters-in-string**: 
5. **check-if-string-is-rotated-by-two-places**: Only 2 directions possible, check if either is true.

# Linked List
1. **rotate-a-linked-list**: Rearrange links of required nodes.
2. **reverse-a-linked-list**: Use previous, current and next pointers to solve iteratively.
3. **reverse-a-linked-list-in-groups-of-given-size**:
4. **check-if-linked-list-is-pallindrome**: Use stack data structure, if odd length, skip middle element.
5. **detect-loop-in-linked-list**: Use fast/slow pointers. 
