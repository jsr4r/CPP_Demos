// Work: Lab 1
// Author: Jonathan Reed
// Purpose: Terminal utility to find the summation of all natural numbers 1 to N using
//			recursion

// Note: this can also be achieved faster through a certain mathematical formula: 
// sum (1 to n) = (n*(n+1)) / 2 

#include <iostream>

using namespace std;

long sumOf (long n);

int main()
{
	long n;
	cout << "Enter a number N to calculate the sum of all natural numbers 1 to N: " << endl;
	cin >> n;
	
	long total = sumOf(n);
	cout << "Sum of 1 to N is: " << total << endl;
	
	return 0;	
}

long sumOf (long n)
{
	if (n==1)
		return 1;
		
	else
		return sumOf(n-1) + n;
	
}
