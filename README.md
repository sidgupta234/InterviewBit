# InterviewBit
Popular Software Engineering interview questions posed on [interviewbit](https://www.interviewbit.com) and their solutions.

## Level-2

### Arrays
#### [Largest number](https://www.interviewbit.com/problems/largest-number/)
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
#### [Add one to number](https://www.interviewbit.com/problems/add-one-to-number/)
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
#### [Anti diagonals](https://www.interviewbit.com/problems/anti-diagonals/)
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
#### [Find duplicate in array](https://www.interviewbit.com/problems/find-duplicate-in-array/)
Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.
<br><br>
**Example:** For **[3, 4, 1, 4, 1]**, you should return ***1***.
<br><br>
**Note**: If there are multiple possible answers ( like in the sample case above ), output any one.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/findDuplicate.cpp)
<br>
<br>
<br>
#### [First missing integer](https://www.interviewbit.com/problems/first-missing-integer/)
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
#### [Kth row of pascal's triangle](https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/)
Given an index **k**, return the **kth** row of the Pascal’s triangle.
<br><br>
**Example:** For **k = 3**, return ***[1,3,3,1]***
<br><br>
 **Note:** k is 0 based. k = 0, corresponds to the row [1].  Could you optimize your algorithm to use only O(k) extra space?
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/kthRowOfPascal.cpp)
<br>
<br>
<br>
#### [Max non-negative subarray](https://www.interviewbit.com/problems/max-non-negative-subarray/)
Find out the maximum sub-array of non negative numbers from an array. The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.
<br><br>
Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).
<br><br>
**Example:** For **[1, 2, 5, -7, 2, 3]**, their are two sub-arrays that follow the constraint; **[1, 2, 5]** and **[2, 3]**. The answer is ***[1, 2, 5]*** as its sum is larger than [2, 3].
<br><br>
**Note:** If there is a tie, then compare with segment's length and return segment which has maximum length.
<br>
**Note 2:** If there is still a tie, then return the segment with minimum starting index.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/maxNonNegSubarray.cpp)
<br>
<br>
<br>
#### [Max sum contiguous subarray](https://www.interviewbit.com/problems/max-sum-contiguous-subarray/)
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
<br><br>
**Example:** For **[-2,1,-3,4,-1,2,1,-5,4]**, the contiguous subarray **[4,-1,2,1]** has the largest sum, which is ***6***.
<br><br>
For this problem, return the maximum sum.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/maxSumKadane.cpp)
<br>
<br>
<br>
#### [Merge overlapping intervals](https://www.interviewbit.com/problems/merge-overlapping-intervals/)
Given a collection of intervals, merge all overlapping intervals.
<br><br>
**Example:** Given **[1,3], [2,6], [8,10], [15,18]**, return ***[1,6] [8,10] [15,18]***.
<br><br>
**Note:** Make sure the returned intervals are sorted.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/mergeOverlappingIntervals.cpp)
<br>
<br>
<br>
#### [Min steps in infinite grid](https://www.interviewbit.com/problems/min-steps-in-infinite-grid/)
You are in an infinite 2D grid where you can move in any of the 8 directions :
<br>
 (x,y) to <br>
    (x+1, y), <br>
    (x - 1, y), <br>
    (x, y+1), <br>
    (x, y-1), <br>
    (x-1, y-1), <br>
    (x+1,y+1), <br>
    (x-1,y+1), <br>
    (x+1,y-1) <br><br>
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.
<br><br>
**Example:** For **[(0, 0), (1, 1), (1, 2)]**, return ***2***.
<br>
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/minSteps.cpp)
<br>
<br>
<br>
#### [Pascal triangle rows](https://www.interviewbit.com/problems/pascal-triangle-rows/)
Given numRows, generate the first numRows of Pascal’s triangle.
<br><br>
**Example:** For numRows = **5**, Return ***[ [1], [1,1], [1,2,1], [1,3,3,1], [1,4,6,4,1] ]***
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/pascalTriangleRow.cpp)
<br>
<br>
<br>
#### [Repeat and missing number array](https://www.interviewbit.com/problems/repeat-and-missing-number-array/)
You are given a read only array of n integers from 1 to n.
Each integer appears exactly once except A which appears twice and B which is missing. Return A and B.
<br><br>
**Note:** Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
<br>
**Note 2:** that in your output A should precede B.
<br><br>
**Example:** For ***[3, 1, 2, 5, 3]*** return ***[3, 4]***
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/repeatAndMissingNum.cpp)
<br>
<br>
<br>
#### [Set matrix zeros](https://www.interviewbit.com/problems/set-matrix-zeros/)
Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0. Do it in place.
<br><br>
**Example:** For a given array A as **[ [1, 0 ,1], [1, 1, 1], [1, 1, 1,] ]**, on returning, the array A should be ***[ [0, 0 ,0], [1, 0, 1], [1, 0, 1] ]***
<br><br>
**Note:** Try to minimize the space and time complexity.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/setMatrixZeroConstSpace.cpp)
<br>
<br>
<br>
#### [Wave array](https://www.interviewbit.com/problems/wave-array/)
Given an array of integers, sort the array into a wave like array and return it, In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
<br><br>
**Example:** Given **[1, 2, 3, 4]**, possible answers could be ***[2, 1, 4, 3]*** or ***[4, 1, 3, 2]***. 
<br><br>
**Note:** Multiple answers are possible, return the one that is  lexicographically smallest.
<br><br>
[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/waveArray.cpp)
<br>
<br>
<br>
