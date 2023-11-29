## Explanation of code

### using Hashing

The code implements an algorithm to find all subarrays with a sum of zero in a given array. The key idea behind the algorithm is to use a hashmap (unordered_map in C++) to store the cumulative sum at each index and the index at which that sum was first encountered. If the same cumulative sum is encountered again, it means that the subarray between the two indices has a sum of zero or if the cumulative sum is zero, it means that the subarray between the first index and the current index has a sum of zero. The code also handles the case when the cumulative sum is zero at the first index.
