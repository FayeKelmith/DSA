## Sort binary Array in Linear Time

## Given a binary array, sort it in linear time and constant space. Output should print contain all zeroes followed by all ones.

## My solution

I run a for loop through the array and store ones and zeros in seperate stacks. Then I pop the stacks and print the arrays in order.

## Solution

We count the number of 0s and 1s with two variables, then we create two for loops to print the 0s and 1s in order.

## Alternate solution

we initialize two variables at 0; while on loops, the other one modifies the number of zeroes slowly, and then when the loop is over, we fill the remaining array with ones. then we print the array.
