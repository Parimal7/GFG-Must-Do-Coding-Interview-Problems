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
12. **rearrange-array-alternately**: I just printed it alternatively using 2 pointers.
13. **minimum-platforms**: Sort all the timings, mapping it with A or D for arrival/departure. For every arrival, +1 the counter, for departure, -1. Then print the max count.
14. **boolean-matrix-problem**: Traverse the array, store row/coloumn where 1 occurs. Traverse again and print 1 if it belongs to earlier stored row/coloumn.
15. **merge-without-extra-space**: Study shellshort then solve it. O((n+m)log(n+m)), constant extra space.
16. **binary-search**: Classic algorithm
17. number-of-pairs: Not done yet.
18. trapping-rain-water: Not done yet.

# String
1. **anagram**: Use an array of size 26 for counting frequencies of each char. O(n)
2. **reverse-words-in-a-given-string**: Reverse individual words, then reverse the complete string. O(n)
3. **remove-duplicates**: Use hashmap to store characters occuring for the first time, print them.
4. **longest-distinct-characters-in-string**: At every character there are two options, either include them, or not. 
   Think carefully how you can figure that out. 
5. **check-if-string-is-rotated-by-two-places**: Only 2 directions possible, check if either is true.
6. roman-number-to-integer: Use cases for each roman number, and change the answer accordingly. O(n)
7. implement-strstr: Brute force it. O(n * m). Another method is to use either KMP or Rabib-Karp algorithm. (Study
   rabin-karp).
8. implement-atoi: Brute force, check for both positive as well as negative integers. (n)
9. longest-common-prefix-in-an-array: Sort the array according to string length, check w.r.t smallest string. O(n^2)
10. permutations-of-a-given-string: Use recursive backtracking. (n!)
11. longest-palindrome-in-a-string: Brute force. O(n^2)
12. recursively-remove-all-adjacent-duplicates: Not done yet.
13. form-a-palindrome: Not done yet.
14. longest-common-substring: Not done yet.

# Linked List
1. finding-middle-element-in-a-linked-list: Iterate and count elements, then iterate again and print required index. O(n)
2. nth-node-from-end-of-linked-list: Either use count of nodes, or two pointers. O(n)
3. 


# Dynamic Programming
1.
2.
3.
4.
5.
6. longest-common-subsequence: Recursive memoization, compare last two characters.


# Graphs
1. depth-first-traversal-for-a-graph: Classic algorithm, use recursion with a boolean array for visited nodes.
2. breadth-first-traversal-for-a-graph: Another classic, use queue.
3. topological-sort: Use DFS and on the recursive call back, add the element to a vector. Reversed vector is the
   topological ordering.
4. detect-cycle-in-an-undirected-graph: Use dfs and the concept of assigning parents to each node.
5. detect-cycle-in-a-directed-graph: Similar to undirected graph, but instead of marking nodes as visited / unvisited,
   we also use a third marking scheme, not visited, currently visiting, and visited.
6. find-the-number-of-islands: Count the number of times dfs is needed for each node.
7. implementing-dijkstra-set-1-adjacency-matrix: Classic SSP algorithm, implemented lazy dijkstra using priority-queue.
8. find-whether-path-exist: Simple application of dfs ( why not bfs? because it takes more time going layer wise ).
9. shortest-source-to-destination-path: Use BFS with a distance array.
10. minimum-cost-path: Use eager dijkstra algorithm ( set instead of priority queue ).
11. implementing-floyd-warshall: Three for loops is all you need. Do not use INTMAX as it can give integer overflow,
    use a bigger number like 10e7 instead
12.
