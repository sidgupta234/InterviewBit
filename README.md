# InterviewBit
Popular Software Engineering interview questions posed on [interviewbit](https://www.interviewbit.com) and their solutions.

## Level-2

### Arrays
####[Largest number](https://www.interviewbit.com/problems/largest-number/)
Given a list of non negative integers, arrange them such that they form the largest number.
<br><br>
**Example:** Given **[3, 30, 34, 5, 9]**, the largest formed number is ***9534330***.
<br><br>
**Note:** The result may be very large, so you need to return a string instead of an integer.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/LargestNumber.cpp)
<br>
<br>
<br>
####[Add one to number](https://www.interviewbit.com/problems/add-one-to-number/)
Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ). 
The digits are stored such that the most significant digit is at the head of the list.
<br><br>
**Example:** If the vector has **[1, 2, 3]** the returned vector should be ***[1, 2, 4]***
as 123 + 1 = 124.
<br><br>
**Note**: The result may be very large, so you need to return a string instead of an integer.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/addOne.cpp)
<br>
<br>
<br>
####[Anti diagonals](https://www.interviewbit.com/problems/anti-diagonals/)
Given a NxN square matrix, return an array of its anti-diagonals. Look at the example for more details.
<br><br>
**Examples:**
<br>
For, **[1, 2, 3, 4, 5, 6, 7, 8, 9]** you should return, ***[ [1], [2, 4], [3, 5, 7], [6, 8], [9] ]***
<br>
For, **[1, 2, 3, 4]** you should return, ***[ [1], [2, 3], [4] ]***
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/antiDiagonals.cpp)
<br>
<br>
<br>
####[Find duplicate in array](https://www.interviewbit.com/problems/find-duplicate-in-array/)
Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.
<br><br>
**Example :** For **[3, 4, 1, 4, 1]**, you should return ***1***.
<br><br>
**Note**: If there are multiple possible answers ( like in the sample case above ), output any one.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/findDuplicate.cpp)
<br>
<br>
<br>
####[First missing integer](https://www.interviewbit.com/problems/first-missing-integer/)
Given an unsorted integer array, find the first missing positive integer.
<br><br>
**Example:** For **[1,2,0]** return ***3***, **[3,4,-1,1]** return ***2***, **[-8, -7, -6]** returns ***1***
<br><br>
**Note**: Your algorithm should run in O(n) time and use constant space.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/firstMissingNumb.cpp)
<br>
<br>
<br>
####[Kth row of pascal's triangle](https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/)
Given an index k, return the kth row of the Pascal’s triangle.
Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:
Input : k = 3

Return : [1,3,3,1]

NOTE : k is 0 based. k = 0, corresponds to the row [1]. 
Could you optimize your algorithm to use only O(k) extra space?


[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/kthRowOfPascal.cpp)
<br>
<br>
####[Max non-negative subarray](https://www.interviewbit.com/problems/max-non-negative-subarray/)
Find out the maximum sub-array of non negative numbers from an array.
The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).

Example:
A : [1, 2, 5, -7, 2, 3]
The two sub-arrays are [1, 2, 5] [2, 3].
The answer is [1, 2, 5] as its sum is larger than [2, 3]

NOTE: If there is a tie, then compare with segment's length and return segment which has maximum length
NOTE 2: If there is still a tie, then return the segment with minimum starting index

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/maxNonNegSubarray.cpp)
<br>
<br>
####[Kth row of pascal's triangle](https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/)
Given an index k, return the kth row of the Pascal’s triangle.
Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:
Input : k = 3

Return : [1,3,3,1]

NOTE : k is 0 based. k = 0, corresponds to the row [1]. 
Could you optimize your algorithm to use only O(k) extra space?

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/maxSumKadane.cpp)
<br>
<br>
####[Max sum contiguous subarray](https://www.interviewbit.com/problems/max-sum-contiguous-subarray/)
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:
Given the array [-2,1,-3,4,-1,2,1,-5,4], the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/maxSumKadane.cpp)
<br>
<br>
####[Merge overlapping intervals](https://www.interviewbit.com/problems/merge-overlapping-intervals/)
Given a collection of intervals, merge all overlapping intervals.

For example:
Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/mergeOverlappingIntervals.cpp)
<br>
<br>
####[Min steps in infinite grid](https://www.interviewbit.com/problems/min-steps-in-infinite-grid/)
You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 

You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example :
Input : [(0, 0), (1, 1), (1, 2)]
Output : 2

It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).

This question is intentionally left slightly vague. Clarify the question by trying out a few cases in the “See Expected Output” section.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/minSteps.cpp)
<br>
<br>
####[Pascal triangle rows](https://www.interviewbit.com/problems/pascal-triangle-rows/)
Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:
Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/pascalTriangleRow.cpp)
<br>
<br>
####[Repeat and missing number array](https://www.interviewbit.com/problems/repeat-and-missing-number-array/)
You are given a read only array of n integers from 1 to n.
Each integer appears exactly once except A which appears twice and B which is missing.
Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Note that in your output A should precede B.

Example:
Input:[3 1 2 5 3] 
Output:[3, 4] 
A = 3, B = 4

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/repeatAndMissingNum.cpp)
<br>
<br>

####[Set matrix zeros](https://www.interviewbit.com/problems/set-matrix-zeros/)
Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0.
Do it in place.

Example
Given array A as

1 0 1
1 1 1 
1 1 1
On returning, the array A should be :

0 0 0
1 0 1
1 0 1
Note that this will be evaluated on the extra memory used. Try to minimize the space and time complexity.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/setMatrixZeroConstSpace.cpp)
<br>

<br>
####[Wave array](https://www.interviewbit.com/problems/wave-array/)
Given an array of integers, sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]

multiple answers are possible, return the one thats lexicographically smallest.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/waveArray.cpp)
<br>
<br>

