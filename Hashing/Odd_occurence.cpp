/*
	--- Question Statement ---

Given an array of positive integers. All numbers occur even number of times except one 
number which occurs odd number of times. Find the number.

Expected Time Complexity: O(n)
Expected Auxiliary Space​: Constant

Input:

The first line of input contains a single integer T denoting the number of test cases. 
Then T test cases follow. Each test case consist of two lines.

The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array 
elements.

Output:

Corresponding to each test case, print in a new line, the number which occur odd 
number of times.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 202
1 ≤ A[i] ≤ 1000

Example:

Input
1
5
8 4 4 8 23

Output
23

*/

#include<iostream>
using namespace std;

int oddTimes(int *array, int n)
{
    int xors = 0;
    
    for(int i=0;i<n;i++)
        xors = xors ^ array[i];
        
    return xors;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int *array = new int[n];
        for(int i=0;i<n;i++)
            cin >> array[i];
            
        cout << oddTimes(array, n) << endl;
    }
    
	return 0;
}