# InterviewBit
This repository contains my solutions to various programming problems posed on the interviewbit's website.

The list of questions :-

## Level-2

### Arrays
####[Largest number](https://www.interviewbit.com/problems/largest-number/)
Given a list of non negative integers, arrange them such that they form the largest number.

For example:
Given [3, 30, 34, 5, 9], the largest formed number is 9534330.
Note: The result may be very large, so you need to return a string instead of an integer.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/LargestNumber.cpp)
<br>
<br>
####[Add one to number](https://www.interviewbit.com/problems/add-one-to-number/)
Given a non-negative number represented as an array of digits,
add 1 to the number ( increment the number represented by the digits ).
The digits are stored such that the most significant digit is at the head of the list.
Example:
If the vector has [1, 2, 3]
the returned vector should be [1, 2, 4]
as 123 + 1 = 124.
Note: The result may be very large, so you need to return a string instead of an integer.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/addOne.cpp)
<br>
<br>
####[Anti diagonals](https://www.interviewbit.com/problems/anti-diagonals/)
Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

Example:
Input: 	
1 2 3
4 5 6
7 8 9

Return the following :
[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]

Input : 
1 2
3 4

Return the following : 

[
  [1],
  [2, 3],
  [4]
]

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/antiDiagonals.cpp)
<br>
<br>
####[Find duplicate in array](https://www.interviewbit.com/problems/find-duplicate-in-array/)
Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.

Sample Input:
[3 4 1 4 1]

Sample Output:
1

If there are multiple possible answers ( like in the sample case above ), output any one.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/findDuplicate.cpp)
<br>
<br>
####[First missing integer](https://www.interviewbit.com/problems/first-missing-integer/)
Given an unsorted integer array, find the first missing positive integer.

Example:
Given [1,2,0] return 3,
[3,4,-1,1] return 2,
[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.

[Solution](https://github.com/sidgupta234/InterviewBit/blob/master/Level-2/Arrays/firstMissingNumb.cpp)
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


