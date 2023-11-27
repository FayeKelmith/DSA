# What I learned:

## Brute force technique

> This technique harnesses a nested for loop, to check every possible combination of numbers in the array. This is a very inefficient technique, as it has a time complexity of O(n^2). This means that the time it takes to run the algorithm increases exponentially as the size of the array increases.

## Sorting technique

> This technique harnesses the sorting algorithm, to sort the array in ascending order. Once the array is sorted, the smallest number will be at the start of the array, and the largest number will be at the end of the array. This means that the smallest number can be found at index 0, and the largest number can be found at index n-1, where n is the size of the array. This technique has a time complexity of O(nlogn), which is much more efficient than the brute force technique.We check the sum of the smallest and largest number, and if it is equal to the target number, we return the indices of the smallest and largest number. If the sum is greater than the target number, we decrement the index of the largest number, and if the sum is less than the target number, we increment the index of the smallest number. We repeat this process until we find the indices of the two numbers that add up to the target number.

## Hashing technique
