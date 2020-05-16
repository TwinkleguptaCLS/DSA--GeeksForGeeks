Find first set bit

Given an integer an N. The task is to print the position of first set bit found from right side in the binary representation of the number.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. The only line of the each test case contains an integer N.

Output:
For each test case print in a single line an integer denoting the position of the first set bit found form right side of the binary representation of the number. If there is no set bit print "0".


Using ffs() function: ffs() function returns the index of first least significant set bit.
The indexing starts in ffs() function from 1.
For example:
n = 12 = 1100
In above example, ffs(n) returns the rightmost set bit index which is 3.
