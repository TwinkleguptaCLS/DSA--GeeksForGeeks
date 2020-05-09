You are given two numbers a and b. You need to find the sum of a and b under modulo M.
Note: Take M as 109+7

Input:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing a and b.

Output:
For each testcase, in a new line, print sum of a and b under modulo M.


//User function Template for C++


int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    a = a%M;
    b = b%M;
    return (a+b)%M;
}
